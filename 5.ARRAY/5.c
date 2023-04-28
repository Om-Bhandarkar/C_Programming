// Sum of Array Element
#include <stdio.h>
int main()
{
    int size;
    printf("Enter size : \n");
    scanf("%d", &size);

    int flag = 0;
    int arr[size];
    printf("Enter the array elements : \n");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int search;
    printf("Enter search : \n");
    scanf("%d", &search);
    for (int i = 0; i < size; i++)
    {
        if (search == arr[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("Element Found\n");
    }
    else
    {
        printf("Element Not Found\n");
    }
    return 0;
}