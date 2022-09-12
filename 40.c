#include <stdio.h>

int main(){

	int number, i = 0,sum = 0;

	do{
		printf("Enter a number: ");
		scanf("%d", &number);
				++i;

		if(number <= 0){
			break;
		}
		else{
			sum += number;
			continue;
		}
	}
	while(i <= 5);

	printf("Sum = %d", sum);

	return 0;	

}
