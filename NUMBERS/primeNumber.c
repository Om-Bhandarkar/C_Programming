//Prime Number or Not
#include<stdio.h>

void isPrime(int num){
    int count = 0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count == 2){
        printf("Prime Number \n");
    }else{
        printf("Not Prime Number \n");
    }
}
void main(){
    int a;
    int count = 0;
    printf("Enter the Number : \n");
    scanf("%d",&a);
    isPrime(a);
}