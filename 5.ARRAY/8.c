#include <stdio.h>
void main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= 6; j++)
        {
            if (arr[i] + arr[j] == 6 && arr[i] != arr[j])
            {
                printf("%d + %d = 6\n", arr[i], arr[j]);
            } 
        }
    }
}