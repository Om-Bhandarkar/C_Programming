// Sum of Array Element
#include <stdio.h>
int main()
{
    int size;
    printf("Enter size : \n");
    scanf("%d", &size);
    int sum = 0;
    int arr[size];
    printf("Enter the array elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of array is %d\n", sum);
    return 0;

}