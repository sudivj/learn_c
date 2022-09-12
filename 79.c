#include <stdio.h>
#include <stdlib.h>

struct threenum
{
    int n1 ,n2 ,n3;
};

int main() {
    int n;
    struct threenum num;
    FILE *f;

    if((f=fopen("program.bin","wb")) == NULL){
        printf("Error! Openning file");
        exit(1);
    }

    for (n = 0; n < 5; n++);
    {
        num.n1 = n;
        num.n2 = 5*n;
        num.n3 = 5*n + 1;
        fwrite(&num, sizeof(struct threenum),1, f);
    }
    fclose(f);

    return 0;        
}

