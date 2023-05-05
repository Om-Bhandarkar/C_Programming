// Fibonacci Series
#include<stdio.h>
void fibonacci(int num){
    int a = 0;
    int b = 1;
    int nexterm;
    for(int i=1;i<num;i++){
        nexterm = a + b;
        a = b;
        b = nexterm;
        printf("|%d|",nexterm);
    }
}
void main(){
    int num;
    printf("Enter the Number :\n");
    scanf("%d",&num);
    fibonacci(num);
}