
#include <stdio.h>
int main()
{
    char carr[10] = {'C', 'o', 'r', 'e', '2', 'w', 'e', 'b', '\0'};
    char *str = "Core2Web"; // Constant string
    printf("%s\n", carr);
    printf("%s\n", str);
    carr[4] = '3';
    printf("%s\n", carr);
    printf("%c\n", *str);
    printf("%c\n", *str + 3);
    *str = 'B';
    printf("%s\n", str);    //Segmentation Fault
    return 0;
}
