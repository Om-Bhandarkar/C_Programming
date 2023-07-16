#include<stdio.h>
 void main(){
    int arr[100];
    int size;
    printf("Enter size of array\n");
    scanf("%d", &size);
    printf("Enter %d numbers\n", size);

    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i++){
        if(arr[i]%2==0){
            sum = sum + arr[i];
        }
    }
    printf("Sum of Array Element is %d",sum);
    
 }