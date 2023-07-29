#include<stdio.h>
int sum(int *a,int* b){
    return *a + *b;
}
int main(){
    int x = 10;
    int y = 20;
    int add = sum(&x,&y);
    printf("Sum is %d",add);
    return 0;
}