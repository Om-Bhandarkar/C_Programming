// Divisor of Number
#include<stdio.h>
int main(){

    int num;
    printf("Enter Number : \n");
    scanf("%d",&num);
    for(int i=1;i<=30;i++){
        if(num%i==0){
            printf("%d ",i);
        }else{
            printf("Invalid");
        }
    }
}