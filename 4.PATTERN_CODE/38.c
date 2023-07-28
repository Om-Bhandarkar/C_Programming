//                                         C
//                                       C H
//                                     C H I
//                                   C H I N
//                                 C H I N M
//                               C H I N M A
//                             C H I N M A Y

#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "CHINMAY";
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        for (int k = len - 1; k >= i; k--)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", name[j]);
        }
        printf("\n");
    }
    return 0;
}