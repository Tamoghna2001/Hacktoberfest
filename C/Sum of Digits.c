#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, n, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);

    while (n>0)
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    printf("Sum : %d", sum);

    return 0;
}
