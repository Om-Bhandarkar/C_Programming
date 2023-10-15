#include<stdio.h>
int main(){
        int size;
        printf("Enter Size : \n");
        scanf("%d",&size);
        int arr[size];
        printf("Enter Array Elements :\n");
        for(int i=0;i<size;i++){
                scanf("%d",&arr[i]);
        }
        int i = 0;
        while(i<size){
            if(arr[i] > arr[i+1]){
                printf("%d",arr[i]);
            }
                printf("%d",arr[i]);
            i++;

        }
}