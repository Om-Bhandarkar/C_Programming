#include<stdio.h>
int factorial(int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact = fact * i;
    }
    printf("The factorial of %d is %ld",num,fact);
}
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    factorial(num);
    return 0;
}