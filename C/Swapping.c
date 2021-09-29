#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int main()
{
    int a = 10, b = 20;

    printf("a and b before swapping : %d , %d\n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("a and b after swapping : %d , %d\n", a, b);
    return 0;
}
*/

//Reverse of String

/*
int main()
{
    char name[20];
    printf("Enter your name : ");
    gets(name);
    printf("Before swapping : %s\n", name);
    printf("After swapping : %s", strrev(name));

}
*/

//Uppercase to Lowercase
/*
int main()
{
    char name[20];
    gets(name);
    printf("Normal : %s\n", name);

    printf("Lowercase : %s\n", strlwr(name));
    printf("UPPERCASE : %s\n", strupr(name));
}
*/

int main()
{
    char s1[20], s2[20];
    gets(s1);
    gets(s2);
    strcat(s1, s2);
    printf(" %s ", s1);
}



