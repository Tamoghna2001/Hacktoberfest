#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct stud
    {
        int id; char name[20]; int marks[2];
    };
    struct stud s[3];

    int i = 0, j = 0;
    for (i=0; i<3; i++)
    {
        printf("Enter ID : ");
        scanf("%d", &s[i].id);
        printf("Enter Name : ");
        scanf("%s", s[i].name);
        for(j = 0; j<2; j++)
        {
            printf("Enter marks : ");
            scanf("%d", &s[i].marks[j]);
        }
    }
    for(i=0; i<3; i++)
    {
        printf("Student ID : %d\n", s[i].id);
        printf("Student Name : %s\n", s[i].name);
        for(j=0; j<2; j++)
        {
            printf("Student Marks : %d\n", s[i].marks[j]);
        }
    }
    return 0;
}
