import {
  withWasm,
  withWasmScope,
  persistWasmValue,
  deletePersistedValue,
  GlueModule,
  Reader
} from "../source";

test("Calling XERNative Method from Reader class", async () => {
  await withWasm((readerModule) => {
    const reader = new readerModule.Reader();
    expect(reader.test_parse("sample.xer")).toBe(0);
  });
});

