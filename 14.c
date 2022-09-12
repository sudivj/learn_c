#include <stdio.h>
int main()
{
	int l = 0, i;
	int value;
	int num;

        printf ("up to: ");
        scanf ("%d", &l);
        printf ("Enter number: ");
        scanf ("%d", &num);

	if (l > 0) {
		printf("%d""%c", num, '\n');
	}
	else {
		printf("You entered 0 or a number less than 0");
	}

	for (i = 2; i <= l; ++i) {
		value = num * i;
		if (value > l) {
			break;
		}
		else {
		printf("%d""%c" ,value ,'\n');
		}

	}
	return 0;



}
