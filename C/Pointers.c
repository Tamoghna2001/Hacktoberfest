/* POINTER
    Types of Pointer
    1) Typed Pointer - Can point to only specific type of data
        -int* ---> int data
        -double* ---> double data
        -struct emp* ---> emp data
    2) Untyped Pointer - Can point to any type of data
        [Generic Pointer, Wider Pointer]
        void* ---> any data

        Remember & and *
*/
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 100;
    int* ptr;
    ptr = &i;
    printf("%d\n", i);
    printf("%d\n", ptr);
    printf("%d\n", &i);
    printf("%d\n", &ptr);
    printf("%d\n", *ptr);
    printf("%d\n", *(&i));
    return 0;
}
*/
 /*struct emp
     {
         int eno;
         char ename[20];
         float esal;
     };
int main()
{
     struct emp* sep;
     int* ip;
     char* cp;

     printf("Size of char* is : %d\n", sizeof(cp));
     printf("Size of int* is : %d\n", sizeof(ip));
     printf("Size of emp* is : %d\n", sizeof(sep));
}
*/

//Pointer to Function
int main()
{
    int r1, r2, r3;
    int (*ptr) (int, int);
    r1 = add(20,30);
    r2 = mul(2,3,4);
    printf("Add and Multiply : %d \t %d\n", r1, r2);
    ptr = &add;
    r3 = ptr(30,40);
    printf("SUM : %d\n", r3);
    return 0;
}
int add(int x, int y)
{
    int z = x+y;
    return z;
}
int mul(int x, int y, int z)
{
    int w = x*y*z;
    return w;
}











