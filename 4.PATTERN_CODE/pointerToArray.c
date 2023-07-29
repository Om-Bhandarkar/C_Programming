#include<stdio.h>
int main(){
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    int *ptr1 = &arr;   //warning : initialization from incompatible pointer type
    printf("%p\n",ptr);
    printf("%p\n",arr);
    printf("%p\n",ptr1);
}