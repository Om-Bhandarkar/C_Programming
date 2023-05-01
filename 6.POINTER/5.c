#include <stdio.h>
void main()
{
    char arr1[3] = {'A', 'B', 'C'};
    char arr2[3] = {'D', 'E', 'F'};
    char arr3[3] = {'G', 'H', 'I'};
    char *cptr[3] = {arr1, arr2, arr3};
    printf("%ld\n", sizeof(cptr));
    cptr[0] = arr1 + 1;
    cptr[1] = arr2 + 2;
    cptr[2] = arr3;
    printf("%c\n", *(cptr[0]));
    printf("%c\n", *(cptr[1]));
    printf("%c\n", *(cptr[2]));
}