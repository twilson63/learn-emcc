import loadWASM from './increment.mjs'

async function main() {
  const wasm_module = await loadWASM();
  console.log(wasm_module._increment(14))
}

main()