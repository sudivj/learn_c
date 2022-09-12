#include <stdio.h>
int main() {
    int *pc, c;

    c = 22;
    printf("%p\n", &c);
    printf("%d\n\n", c);

    pc = &c;
    printf("%p\n", pc);
    printf("%d\n\n", *pc);

    c = 11;
    printf("%p\n", pc);
    printf("%d\n\n", *pc);

    *pc = 2;
    printf("%p\n", &c);
    printf("%d\n\n", c);

    return 0;
}