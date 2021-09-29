#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int i, sum=0;
    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum : %d", sum);
    return 0;
}

//Take a variable sum and store sum = 0
//Add the array elements in sum
//Print sum at last
