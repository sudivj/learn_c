#include <stdio.h>
#include <string.h>
#include "Lists.h"

int main() {
    char name[100];
    char letter;
    int result;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter letter: ");
    scanf("%c",&letter);

    result = giveslot(letter,name);
    printf("%d",result);

    return 0;
}