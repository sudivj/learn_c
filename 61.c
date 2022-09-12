#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "This is ", str2[] = "Sudiv";
    printf("str1 = %zu\n",strlen(str1));
    printf("str2 = %zu\n",strlen(str2));

    strcat(str1,str2);

    puts(str1);
    puts(str2);
    printf("Length of str1:%zu \n", strlen(str1));
    printf("Length of str2:%zu \n", strlen(str2));

    return 0;
}