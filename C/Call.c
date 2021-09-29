#include <stdio.h>
#include <stdlib.h>

/*
//Call by Value
int main()
{
    int a = 10, b = 20;
    printf("Before Swapping : %d \t %d\n", a, b);

    swap(a,b);
    return 0;
}
swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After Swapping : %d \t %d\n", x,y);
}
*/


//Call by Reference
int main()
{
    int a = 10, b = 20;
    printf("Before Swapping : %d \t %d\n", a, b);
    swap(&a, &b);
    printf("After Swapping : %d \t %d\n", a, b);
}
swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After Swapping : %d \t %d\n", *x, *y);
}












