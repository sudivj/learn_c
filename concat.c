#include <stdio.h>
#include <string.h>

int main()
{

    char str1[10] = "sudiv";
    char str2[10] = "supun";
    int i, i1;
    for (i = 0; str1[i] != '\0'; i)
    {
        ++i;
    }
    for (i1 = 0; str2[i1] != '\0'; i1++, ++i)
    {
        str1[i] = str2[i1];
    }
    str1[i] = '\0';
    printf("%s", str1);

    return 0;
}