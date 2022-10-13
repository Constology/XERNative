import { GlueModule } from "./WasmModule.js";
export { GlueModule } from "./WasmModule.js";
declare type Deletable = {
    delete(): void;
};
declare type Scope = Deletable[];
/**
 * get the scope for debugging and testing
 * @param idx the scope index to get from the top
 */
export declare function __getCurrentWasmScope(idx?: number): Scope;
/**
 * get the scope stack size for debugging and testing
 */
export declare function __getCurrentWasmScopeStackSize(): number;
/**
 * persist a value from the current scope so it will stay alive after the scope
 * is closed
 * @param value: the wasm value to be persisted
 */
export declare function persistWasmValue<V>(value: V): V;
/**
 * delete persisted values
 */
export declare function deletePersistedValue(value: any): void;
/**
 * Opens a scope and calls `callback` inside
 * @param callback
 */
export declare function withWasmScope<R>(callback: () => R): R;
/**
 * Calls `callback` asynchronously inside a wasm scope with the wasm module as
 * an argument
 * @param callback
 */
export declare function withWasm<R>(callback: (module: GlueModule) => R): Promise<R>;
