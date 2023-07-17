#include <stdio.h>
void reverseArray(int *arr, int size)
{
    // printf("reverseArray\n");
    for (int i = 0; i <= size / 2; i++)
    {
        int t = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = t;
    }
}
void main()
{
    int size;
    printf("Arrray Size : \n");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("Enter Data At Index %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("INPUT ARRAY :\n");
    for (int i = 0; i < size; i++){
        printf(" %d ", arr[i]);
    }
    reverseArray(arr, size);
    printf("\n\nOUTPUT ARRAY :\n");
    for (int i = 0; i < size; i++){
        printf(" %d ", arr[i]);
    }
}
