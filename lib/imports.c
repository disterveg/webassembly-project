#include <emscripten.h>
#include <stdio.h>

int main() {
    printf("WASM ready\n");

    emscripten_run_script("console.log('hello from C')"); //Calling JavaScript functions from C

    emscripten_async_run_script("console.log('hello from C')", 2000); //async

    int jsVal = emscripten_run_script_int("getNum()");

    printf("val from getNum(): %d\n",jsVal);

    return 1;
}