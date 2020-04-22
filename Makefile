C_PATH = ./lib/prime.c
JS_PATH = ./public/prime.js
EMSCRIPTEN_SH = ./lib/emsdk/emsdk_env.sh

NPM     ?= npm
EMCC    ?= emcc

.PHONY: dev
dev:
	$(EMSCRIPTEN_SH)
	$(EMCC) $(C_PATH) -s WASM=1 -s EXPORTED_FUNCTIONS="['_isPrime', '_checkPrimes']" -o $(JS_PATH)
	$(NPM) run start