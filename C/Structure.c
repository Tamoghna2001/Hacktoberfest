#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct emp
    {
        int no; char name[20]; float sal;
    };
    struct emp e;
    printf("Enter Employee Number : ");
    scanf("%d",&e.no);
    printf("Enter name of employee : ");
    scanf("%s", e.name);
    printf("Enter Salary : ");
    scanf("%f", &e.sal);

    printf(".......................\n");
    printf("Employee Number : %d\n", e.no);
    printf("Employee Name : %s\n", e.name);
    printf("Employee Salary : %.2f\n", e.sal);
    return 0;
}
