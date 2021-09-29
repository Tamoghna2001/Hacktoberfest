#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int array[50], n, i, key, loc;
    printf("Array Size : ");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &key);
    printf("Enter location to insert : ");
    scanf("%d", &loc);
    for(i=n-1; i>=loc; i--)
    {
        array[i+1]= array[i];
    }
    array[loc]= key;
    for(i=0; i<=n; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
*/

//We are inserting array b into array a
int main()
{
    int m, n, i, loc;
    int a[50]; int b[50];
    printf("Enter the size of Array a : ");
    scanf("%d", &n);
    printf("Enter the array a elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d, ", a[i]);
    }
    printf("\nEnter the size of Array b : ");
    scanf("%d", &m);
    printf("Enter the array b elements : \n");
    for(i=0; i<m; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i=0; i<m; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("\nEnter the location where you want to insert : ");
    scanf("%d", &loc);
    for(i=n-1; i>=loc; i--)
    {
        a[i+m]= a[i];
    }
    for(i=0; i<n-1; i++)
    {
        a[loc+i]=b[i];
    }
    for(i=0; i<m+n; i++)
    {
        printf("%d, ", a[i]);
    }
    return 0;
}








