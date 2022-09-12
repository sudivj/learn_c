#include <stdio.h>
void display();

int main() {
    display();
    display();
    
    return 0;
}

void display() {
    static int c = 1;
    c +=5;
    printf("%d ",c);
}