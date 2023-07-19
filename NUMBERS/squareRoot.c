#include<stdio.h>
void squareRoot(int num){
    float sqrt = num / 2;
    float temp = 0.0;
    while(temp != sqrt){
        temp = sqrt;
        sqrt = ((num / temp) + temp) / 2;
    }
    printf("The square root of %d is %f \n",num,sqrt);
}
void main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    squareRoot(num);
}