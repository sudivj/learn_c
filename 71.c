#include <stdio.h>
union ujobs
{
    char name[32];
    float salary;
    int workerno;
} ujob;

struct sjobs
{
    char name[32];
    float salary;
    int wokerno;
} sjob;

int main() {
    printf("size of union: %d bytes\n",sizeof(ujob));
    printf("size of struct: %d bytes", sizeof(sjob));

    return 0;

}