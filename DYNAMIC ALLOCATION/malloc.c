#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 10;
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 50;
    printf("%d\n",*ptr);
    free(ptr);
    return 0;
}