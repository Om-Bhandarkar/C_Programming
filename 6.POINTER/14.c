#include <stdio.h>
int main()
{
    int x = 10;
    char ch = 'a';
    int *ptr = &x;
    char *ptr2 = &ch;
    printf("%d\n", *ptr);
    printf("%c\n", *ptr2);
    return 0;
}