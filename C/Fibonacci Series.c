#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, a =0, b=1, c;
    printf("Enter Number Limit\n");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        printf("%d\n", a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}

//First we take the value of n
//Then we go to the for loop, where we take the value of i=0 and i<=n
//We increase the value of c by adding a+b, this is the main
//then we substitute the value of b to a and c to b
//after that i value increases and gives next number of Fibonacci Series
