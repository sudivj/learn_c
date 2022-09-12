#include <stdio.h>
#include <string.h>

typedef struct Person
{
    char name[50];
    int CityNo;
    float Salary;
        
}person;

int main() {

    person p1;
    
    strcpy(p1.name, "Sudiv Jayathialke");
    p1.CityNo = 2;
    p1.Salary = 1000000;

    printf("Name = %s\n", p1.name);
    printf("City number = %d\n", p1.CityNo);
    printf("Salary = %.2f", p1.Salary);

    return 0;
}
