#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, count = 0;
    printf("Enter a number\n");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("The number is the prime number.\n");
    }
    else
    {
        printf("The number is not the prime number.\n");
    }
    return 0;
}

//First we just take the input
//Then we take a for loop
//We divide the input value by integer up to that number
//We already had taken count = 0
//if n%i == 0, then we add 1 to the count
//if count==2 at last then that number is the prime number
//if n>2 then that number is not the prime number
