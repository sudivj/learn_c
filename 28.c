#include <stdio.h>
int main()
{
	int number;
	printf("Enter an integer: " );
	scanf("%d", &number);

	if (number%2 == 0){
		printf("you entered a even number");

	}
	else {
		printf("You entered a odd number");

	}

	return 0;
}
