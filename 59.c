#include <stdio.h>
void display(char str[]);

int main() {
    char str[50];
    printf("Enter name: ");
    fgets(str, sizeof(str), stdin);
    display(str);

    return 0;

}
void display(char str[])
{
    printf("Name: ");
    puts(str);
}