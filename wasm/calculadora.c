#include <stdio.h>
#include <stdlib.h>
#include <emscripten/emscripten.h>

//velores inteiros
EMSCRIPTEN_KEEPALIVE
void soma(int a, int b){
    int r = a+b;
    printf("A soma de %d e %d eh: %d\n", a, b, r);
}

EMSCRIPTEN_KEEPALIVE
void sub(int a, int b){
    int r = a-b;
    printf("A subtracao de %d e %d eh: %d\n", a, b, r);
}

EMSCRIPTEN_KEEPALIVE
void mult(int a, int b){
    int r = a*b;
    printf("A multiplicacao de %d e %d eh: %d\n", a, b, r);
}

EMSCRIPTEN_KEEPALIVE
void divi(int a, int b){
    int r = a/b;
    printf("A divisao inteira de %d e %d eh: %d\n", a, b, r);
}

//valores float
EMSCRIPTEN_KEEPALIVE
void somaf(float a, float b){
    float r = a+b;
    printf("A soma de %.2f e %.2f eh: %.2f\n", a, b, r);
}
EMSCRIPTEN_KEEPALIVE
void subf(float a, float b){
    float r = a-b;
    printf("A subtracao de %.2f e %.2f eh: %.2f\n", a, b, r);
}
EMSCRIPTEN_KEEPALIVE
void multf(float a, float b){
    float r = a*b;
    printf("A multiplicacao de %.2f e %.2f eh: %.2f\n", a, b, r);
}
EMSCRIPTEN_KEEPALIVE
void divf(float a, float b){
    float r = a/b;
    printf("A divisao inteira de %.2f e %.2f eh: %.2f\n", a, b, r);
}

int main(){
    soma(1, 2);
    sub(5, 10);
    mult(5, 92);
    divi(81, 3);
    somaf(3.2, 3.8);
    subf(4.5,1.5);
    multf(3.1,1.1);
    divf(5.0, 2.5);
    return 0;
}