#include <stdio.h>
struct details
{
    char name[10];
    int age;
};
struct details d[10];
int main() {
    int num;
    int students = 3;
    printf("Enter details, \n");
    for(int i = 0; i < students; ++i){
        printf("Enter Name of student %d: ", (i + 1));
        scanf("%s", &d[i].name);
        printf("Enter age of student %d: ", (i + 1));
        scanf("%d", &d[i].age);
    }
    printf("Showing Details:\n");
    for (int i = 0; i < students; i++)
    {
        printf("%d.Name = %s\tAge = %d \n",i , d[i].name ,d[i].age);
    }
    return 0;    

}
