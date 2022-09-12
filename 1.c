#include <stdio.h>
#include <string.h>

int main()
{
    int fnum;
    int snum;

    printf("%s", "Enter first number: ");
    scanf("%d", &fnum); // get first input from user
    printf("%s" ,"Enter second number: ");
    scanf("%d", &snum);// get second input from user

    //myprint("%d" , fnum);

    if (fnum == snum)
    {
            printf("%d=%d", fnum,snum);

    }
    else {
        if (fnum > snum)
        {
           printf("%d>%d", fnum, snum);
        }
	else {
	    if (fnum < snum)
	    {
		printf("%d<%d", fnum, snum);
	    }
	}
    }	
	   
    return 0;
    }
