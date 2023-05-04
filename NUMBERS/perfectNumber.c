//Perfect Number or Not
#include<stdio.h>
void isPerfect(int num){
    int sum = 0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum = sum + i;
        }
    }
    if(sum == num){
        printf("Perfect Number\n");
    }else{
        printf("Not Perfect Number\n");
    }
}
void main(){
    int a;
    printf("Enter the Number : \n");
    scanf("%d",&a);
    isPerfect(a);
}