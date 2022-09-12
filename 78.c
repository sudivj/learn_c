#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    FILE *fptr;

    fptr = fopen("program.txt","w");
     
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter a num: ");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr);

    fptr = fopen("program.txt","r");

    if (fptr == NULL)
    {
        printf("Error! Opening file");
        exit(1);
    }
    fscanf(fptr,"%d",&num);

    printf("Value in file: %d",num);
    fclose(fptr);  

    return 0;
          
}