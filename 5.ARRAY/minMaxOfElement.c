// Find Minimum and Maximum Element In An Array
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
        int min = arr[0];
        int max = arr[0];
        int i = 0;
        while(i<size){
                if(min>arr[i]){
                        min = arr[i];
                }
                if(max<arr[i]){
                        max = arr[i];
                }
                i++;
        }
        printf("MAX = %d\n",max);
        printf("MIN = %d\n",min);
}