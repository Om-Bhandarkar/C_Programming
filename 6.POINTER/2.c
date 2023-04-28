#include<stdio.h>
void main(){
    int x = 10;
    int y = 20;
    int *ptr = &x;
    int *ptr1 = y;
    printf("%p\n",ptr);
    printf("%d\n",ptr);
    printf("%p\n",ptr1);
    printf("%d\n",ptr1);

}