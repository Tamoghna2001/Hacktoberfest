#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, res;
    printf("Enter a number\n");
    scanf("%d", &n);
    res = fact(n);
    printf("%d! = %d", n, res);
    return 0;
}
fact(int n)
{
    int res;
    if(n == 0)
        res = 1;
    else
        res = n * fact(n-1);
    return res;
}

//Recursive Function : Function calling itself
//main()
//{
//  printf("Start");
//  main();
//  printf("End");
//}
//And the function should end where it starts
