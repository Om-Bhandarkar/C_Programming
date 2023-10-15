// Product of Array
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
        int mul = 1;
        int i = 0;
        while(i<size){
                mul = mul * arr[i];
                i++;
        }
        printf("Product of Array = %d\n",mul);
}