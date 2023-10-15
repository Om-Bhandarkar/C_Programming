#include<stdio.h>
void sortAscending(int *arr, int lim)
{
    for (int i = 1; i < lim; i++)
    {
        int t = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > t)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = t;
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main()
{
    int arr[] = {0, 23, 14, 12, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);

    sortAscending(arr, n);
    printf("\nSorted array in Ascending order: \n");
    printArray(arr, n);

    return 0;
}
