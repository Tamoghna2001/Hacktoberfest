#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5]={21, 65, 87, 12, 74};
    int i, large = 0;

    for(i=0; i<5; i++)
    {
        if(large<arr[i])
        {
            large = arr[i];
        }
    }
    printf("Largest Number : %d", large);
    return 0;
}

//Take a dummy variable and store zero
//Compare that value with the integer of array
//Store the array element in that dummy variable if the if condition is satisfied
//Print the dummy variable at last
