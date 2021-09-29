#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n, r, temp, fact, i, sum = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    temp = n;
    while(n>0)
    {
        fact = 1;
        r = n%10;
        for(i=r; i>=1; i--)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n/10;
    }
    n = temp;
    if(n==sum)
    {
        printf("The given number is a strong number\n");
    }
    else
    {
        printf("The given number is not a strong number\n");
    }
    return 0;
}*/


//Here what we did is, we first took a number
//then we declare the variables r, sum, fact, temp (to store the value of n temporarily)
//Then we started a while loop
//inside the while loop we found the value of factorial of each digits of the given input number
//Then We added up all the fact values
//At last we compared the sum value and given input value


//Printing Strong numbers in a given range
int main()
{
    int a, b, r, n, i, temp, sum, fact;
    printf("Enter the lower limit : ");
    scanf("%d", &a);
    printf("Enter the upper limit : ");
    scanf("%d", &b);

    for(n=a; n<=b; n++)
    {
        sum = 0;
        temp = n;
        while(n>0)
        {
            fact = 1;
            r = n%10;
            for(i=r; i>=1; i--)
            {
                fact = fact *i;
            }
            sum = sum + fact;
            n = n/10;
        }
        n = temp;
        if(n==sum)
        {
            printf("%d\n", n);
        }
    }
}

//As same as described earlier but here we have put all the program inside the for loop
//because we are supposed to check all the values of n inside the limits
