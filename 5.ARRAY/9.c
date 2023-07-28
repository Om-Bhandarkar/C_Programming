#include <stdio.h>
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    int i = 0;
    printf("First Array \n");
    while (i < 5)
    {
        printf("%d\n", arr1[i]);
        i++;
    }
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("Second Array \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr2[i]);
    }
    return 0;
}
