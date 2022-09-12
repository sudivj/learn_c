#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

struct student getinformation();
int main() {

    struct student s;
    s = getinformation();

    printf("\nDisplaying Information\n");
    printf("Name: %s",s.name);
    printf("\nAge: %d",s.age);

    return 0;
}
struct student getinformation(){
    struct student s1;

    printf("Enter Name: ");
    scanf("%s", s1.name);
    printf("Enter Age: ");
    scanf("%d", &s1.age);

    return s1;
}