#include <stdio.h>

int main() {

	double number , sum = 0;
	int i = 0;

	do {
		printf("Enter a unmber: ");
		scanf("%lf", &number);
		sum += number;
		++i;
	}
	while(i != 5);

	printf("Sum = %.2lf",sum);

	return 0;
}
