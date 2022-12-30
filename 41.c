#include <stdio.h>

int main (){       
    int arr[15] = 111101101101111;
	int i;
	int l = 0;
	int letter;

	for (i = 0; i <= 4;++i)
	{
		

		for (l = l; l <= 4 ; ++l)
		{
			letter = l;
			printf("%d",arr[letter]);

		}
		printf("\n");


	}

	printf("%d ", letter);


	return 0;
}
