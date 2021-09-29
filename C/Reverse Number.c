#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);

    while(n>0)
    {
        r = n%10;
        sum = sum*10+r;
        n = n/10;
    }
    printf("Reverse Number : %d", sum);
    return 0;
}
