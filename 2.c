#include <stdio.h>

int main ()
{
	int fnum;
	int snum;
	char operation;

	printf("Enter first number:");
	scanf("%d",&fnum);
	printf("Enter second number:");
	scanf("%d",&snum);
	printf("Enter the operation(+,-,*,/):");
	scanf(" %c",&operation);
	getchar();
        //printf(" %c", operation);	
	if (operation == '+')
	{
		printf("%d", fnum+snum);
	}
	else
	{
		if (operation == '-')
		{
			printf("%d", fnum-snum);
		}
		else 
		{
		       if (operation == '/')
		       {
			       printf("%d", fnum/snum);
		       }
		       else
		       {
			      if (operation == '*')
			      {
				      printf("%d", fnum*snum);
			      }
		       }
	   	}
	}

	return 0;
}
