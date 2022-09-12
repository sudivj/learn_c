#include <stdio.h>

struct numbers
{
    int imag;
    float real;
};

struct numbers2
{
    struct numbers comp;
    int integer;
}num1;

int main() {
    
    num1.comp.imag = 2;
    num1.comp.real = 2.5;
    num1.integer = 6;

    printf("Imaginary number = %d\n");
}

