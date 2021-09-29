#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[30];
    int len;
    printf("Enter string : ");
    gets(str);
    len = strlen(str);
    printf("Length of %s : %d", str, len);

    return 0;
}

