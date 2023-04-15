//    IF - ELSE LADDER
#include<stdio.h>
void main(){
    int money;
    printf("Enter the Money : ");
    scanf("%d",&money);
    if(money >= 10000){
        printf("Buy SmartPhone");
    }else if(money >= 5000){
        printf("Buy SmartWatch");
    }else if(money >= 2500){
        printf("Buy HeadPhone");
    }else{
        printf("Saving");
    }
}