#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r, sum=0, temp;
    printf("Enter a number to check\n");
    scanf("%d", &n);
    temp = n;
    while(n>0)
    {
        r = n%10;
        sum = sum *10 +r;
        n = n/10;
    }
    n = temp;
    if(n == sum)
    {
        printf("Palindrome Number\n");
    }
    else
    {
        printf("Not a Palindrome Number\n");
    }
    return 0;
}

//First we take a number to check
//Then we declare the variables n, r, sum=0 and temp. Temp is because we need to carry the value of n
//Them we get the reminder from n and use the formula sum=sum*10+r
//Then we get the new n value after dividing by 10
//We transfer the temporary value to n again
//then we compare the condition of Palindrome number in if/else statement
