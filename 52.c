#include <stdio.h>

int main () {
    int arr[15] = {1,1,1,1,0,1,1,0,1,1,0,1,1,1,1};
    int letter = 1;

    for(int i = 1; i <= 5; ++i){

        for(int l = 1;l <= 3; ++l){

            printf("%d",arr[letter - 1]);
            ++letter;

        }
        printf("\n");
    }

    return 0;
}