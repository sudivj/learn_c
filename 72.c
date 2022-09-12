#include <stdio.h>
union job
{
    float salary;
    int workernumber;
}j;

int main() {
    j.salary = 12.3;
    j.workernumber = 100;

    printf("Salary = %.1f\n", j.salary);
    printf("Worker number = %d", j.workernumber);

    return 0;
}
