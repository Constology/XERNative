"use strict";
var __awaiter = (this && this.__awaiter) || function (thisArg, _arguments, P, generator) {
    function adopt(value) { return value instanceof P ? value : new P(function (resolve) { resolve(value); }); }
    return new (P || (P = Promise))(function (resolve, reject) {
        function fulfilled(value) { try { step(generator.next(value)); } catch (e) { reject(e); } }
        function rejected(value) { try { step(generator["throw"](value)); } catch (e) { reject(e); } }
        function step(result) { result.done ? resolve(result.value) : adopt(result.value).then(fulfilled, rejected); }
        step((generator = generator.apply(thisArg, _arguments || [])).next());
    });
};
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
exports.withWasm = exports.withWasmScope = exports.deletePersistedValue = exports.persistWasmValue = exports.__getCurrentWasmScopeStackSize = exports.__getCurrentWasmScope = void 0;
const WasmModule_js_1 = __importDefault(require("./WasmModule.js"));
const scopeStack = [];
function pushScope() {
    scopeStack.push([]);
}
function currentScope() {
    return scopeStack[scopeStack.length - 1];
}
function popScope() {
    const scope = scopeStack.pop();
    if (scope) {
        for (const v of scope) {
            v.delete();
        }
    }
    else {
        console.warn("wasm scope underflow");
    }
}
let loaded;
let wasmModule;
/**
 * Returns a promise that will resolve after the main method has finished
 */
function getWasm() {
    if (wasmModule) {
        return Promise.resolve(wasmModule);
    }
    else {
        return new Promise((res, rej) => {
            if (wasmModule) {
                res(wasmModule);
            }
            else {
                loaded = loaded || (0, WasmModule_js_1.default)();
                loaded.then((module) => {
                    if (!wasmModule) {
                        module.callMain();
                        module.setConstructCallback((v) => { var _a; return (_a = currentScope()) === null || _a === void 0 ? void 0 : _a.push(v); });
                        wasmModule = module;
                        // remove `then` property to resolve promise without creating an
                        // endless loop
                        loaded["then"] = undefined;
                    }
                    res(wasmModule);
                });
            }
        });
    }
}
/**
 * get the scope for debugging and testing
 * @param idx the scope index to get from the top
 */
function __getCurrentWasmScope(idx = 0) {
    return scopeStack[scopeStack.length - 1 - idx];
}
exports.__getCurrentWasmScope = __getCurrentWasmScope;
/**
 * get the scope stack size for debugging and testing
 */
function __getCurrentWasmScopeStackSize() {
    return scopeStack.length;
}
exports.__getCurrentWasmScopeStackSize = __getCurrentWasmScopeStackSize;
/**
 * persist a value from the current scope so it will stay alive after the scope
 * is closed
 * @param value: the wasm value to be persisted
 */
function persistWasmValue(value) {
    const scope = currentScope();
    if (scope) {
        const idx = scope.indexOf(value["__glue_instance"]);
        if (idx != -1) {
            scope.splice(idx, 1);
        }
        else {
            console.error(`could not persist value: value not found in current scope.`);
        }
    }
    else {
        console.error(`persisting a value outside of the current scope.`);
    }
    return value;
}
exports.persistWasmValue = persistWasmValue;
/**
 * delete persisted values
 */
function deletePersistedValue(value) {
    value.delete();
}
exports.deletePersistedValue = deletePersistedValue;
/**
 * Opens a scope and calls `callback` inside
 * @param callback
 */
function withWasmScope(callback) {
    pushScope();
    let result;
    try {
        result = callback();
    }
    catch (error) {
        if (typeof error === "number") {
            throw new Error(wasmModule.getExceptionMessage(error));
        }
        else {
            throw error;
        }
    }
    finally {
        popScope();
    }
    return result;
}
exports.withWasmScope = withWasmScope;
/**
 * Calls `callback` asynchronously inside a wasm scope with the wasm module as
 * an argument
 * @param callback
 */
function withWasm(callback) {
    return __awaiter(this, void 0, void 0, function* () {
        const glue = yield getWasm();
        return withWasmScope(() => callback(glue));
    });
}
exports.withWasm = withWasm;
//# sourceMappingURL=wasmWrapper.js.map