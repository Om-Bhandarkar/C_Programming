// Even Elements of array

#include<stdio.h>
int main(){
    int size;
    printf("Enter size : \n");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the array elements : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("|%d|",arr[i]);
        }
    }
}
