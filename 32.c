#include <stdio.h>

int main() {

	int a, b, c ;

	printf("variables (a,b,c) \n");
	printf("Enter a number a: " );
	scanf("%d", &a);
	printf("Enter a number for b: ");
	scanf("%d", &b);

	c = a+b;
	printf("a+b = %d \n", c);
	c = a-b;
	printf("a-b = %d \n", c);
	c = a*b;
	printf("a*b = %d \n", c);
	c = a/b;
	printf("a/b = %d \n", c);
	c = a%b;
	printf("Remainder of a/b = %d \n", c);

	return 0;

}
