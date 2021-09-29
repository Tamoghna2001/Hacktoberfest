#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n, i, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);

    for(i=1; i<n;i++)
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("%d is a PERFECT NUMBER.", n);
    }
    else
        printf("%d is not a PERFECT NUMBER.", n);
    return 0;
}*/

int main()
{
    int a, b, n, i, sum;
    printf("Enter lower boundary\n");
    scanf("%d", &a);
    printf("Enter upper boundary\n");
    scanf("%d", &b);

    for (n=a; n<=b; n++)
    {
        sum = 0;
        for (i=1; i<n; i++)
        {
            if(n%i==0)
            {
            sum = sum + i;
            }
        }
        if(sum==n)
        {
            printf("%d\n", n);
        }
    }
}
