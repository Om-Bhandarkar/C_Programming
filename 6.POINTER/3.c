// Array of pointer
#include<stdio.h>
void main(){
    int x = 10;
    int y = 20;
    int z = 30;
    int *ptr[3] = {&x,&y,&z};
    printf("Size = %ld\n",sizeof(ptr));
    printf("%p\n",ptr[0]);
    printf("%p\n",ptr[1]);
    printf("%p\n",ptr[2]);
} 