#include <stdio.h>
#include <stdlib.h>

struct threenum
{
    int n1, n2, n3;
};

int main() {
    int n;
    struct threenum num;
    FILE *f;

    if((f = fopen("program.bin","rb")) == NULL)
    {
        printf("Error! Openning file");
        exit(1);
    }

    for(n = 1; n < 5; n++){
        fread(&num, sizeof(struct threenum),1,f);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(f);

    return 0;
}
