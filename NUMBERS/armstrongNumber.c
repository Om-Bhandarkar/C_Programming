//Armstrong Number Or Not
#include<stdio.h>
void isArmstrong(int num){
    int temp = num;
    int sum = 0;
    int temp1;
    while(num>0){
        temp1 = num % 10;
        sum = sum + (temp1*temp1*temp1);
        num = num / 10; 
    }
    if(temp == sum){
        printf("Armstrong Number\n");
    }else{
        printf("Not Armstrong Number\n");
    }
}
void main(){
    int num;
    printf("Enter the Number :\n");
    scanf("%d",&num);
    isArmstrong(num);
    
}