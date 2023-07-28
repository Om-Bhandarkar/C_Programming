#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Om";
    int len = strlen(name);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", name[j]);
        }
        printf("\n");
    }
    return 0;
}