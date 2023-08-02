#include <stdio.h>
char *mystrrev(char *str)
{
    char *temp = str;
    while (*temp != '\0')
    {
        temp++;
    }
    temp--;
    char ch;
    while (str < temp)
    {
        ch = *str;
        *str = *temp;
        *temp = ch;
        str++;
        temp--;
    }
    return str;
}
void main()
{
    char arr[10] = {'S', 'e', 'e', 'm', 'a', '\0'};
    mystrrev(arr);
    puts(arr);
}