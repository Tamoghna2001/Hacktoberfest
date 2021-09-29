#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n, sum=0, r, temp, cube;
    printf("Enter a number\n");
    scanf("%d",&n);

    temp = n;
    while(n>0)
    {
        r = n%10;
        cube = r*r*r;
        sum = sum+cube;
        n = n/10;
    }
    n = temp;
    if(n == sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("NOT an Armstrong Number");
    }
    return 0;
}*/

int main()
{
    int n, i, a, b, sum, r, temp, cube;
    printf("Enter lower limit\n");
    scanf("%d",&a);
    printf("Enter upper limit\n");
    scanf("%d",&b);


    for(n=a; n<=b; n++)
    {
        temp = n;
        sum = 0;
        while(n>0)
        {
            r = n%10;
            cube = r*r*r;
            sum = sum+cube;
            n = n/10;
        }
        n = temp;
        if(n == sum)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}
