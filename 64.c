#include <stdio.h>
#include <string.h>

struct person
{
    char name[50];
    int cityNo;
    float salary;
}person1;

int main() {

    strcpy(person1.name, "Sudiv Jayathilake");
    person1.cityNo = 2;
    person1.salary = 10000.50;

    printf("Name: %s\n",person1.name);
    printf("City number: %d\n", person1.cityNo);
    printf("Salary: %.2f",person1.salary);

    return 0;
}
