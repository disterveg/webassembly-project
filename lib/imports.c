#include <emscripten.h>
#include <stdio.h>

int main() {
    printf("WASM ready\n");

    emscripten_run_script("console.log('hello from C')"); //Calling JavaScript functions from C
    return 1;
}