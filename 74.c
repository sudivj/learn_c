#include <stdio.h>
#include <stdlib.h>

struct details
{
    char name[10];
    int age;
};

int main()
{
    struct details *d;
    int num;
    int students; 
    printf("Enter numer of student: ");
    scanf("%d", &students);
    d = (struct details *)malloc(students * sizeof(struct details));
    printf("Enter details, \n");
    for (int i = 0; i < students; ++i)
    {
        printf("Enter Name of student %d: ", (i + 1));
        scanf("%s", (d + i)->name);
        printf("Enter age of student %d: ", (i + 1));
        scanf("%d", &(d + i)->age);
    }
    printf("\n");
    printf("Showing Details:\n");
    printf("\n");
    for (int i = 0; i < students; i++)
    {
        printf("%d.Name = %s\tAge = %d \n", i, (d + i)->name, (d + i)->age);
    }
    return 0;
}