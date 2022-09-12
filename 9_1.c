#include <stdio.h>
int main() {
    int base, exp;
    long double result = 1.0; 
    int i;
    
    for (i = 10; i < 20; i+=5) {
	printf("%i", i);
    	func(base, exp, result);
    }

    return 0;
}


void func(int b, int e, long double r)
{
    printf("Enter a base number: ");
    scanf("%d", &b);
    printf("Enter an exponent: ");
    scanf("%d", &e);

    while (e != 0) {
        r *= b;
        --e;
    }
    printf("Answer = %.0Lf", r);
    printf("\n");
}	
