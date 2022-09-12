#include <stdio.h>
int main()
{
	int number;

	printf("Enter an integer: ");
	scanf ("%d", &number);

	if (number < 0) {
		printf("you entered a negative value '%d' ", number);
	}

	if (number > 0) {
	printf("You entered a positive value '%d' ", number);
	}




	return 0;

}
