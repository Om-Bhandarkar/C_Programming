#include<stdio.h>
void main(){
    float tax;
    printf("Enter the ammount tax");
    scanf("%f",&tax);
    if(tax>=0 && tax<=500000){
        printf("%f income have zero percentage tax",tax);
    }
    if(tax>500000 && tax<=1000000){
        printf("%f income have 10 percentage tax",tax);
    }
    if(tax>1000000 && tax<=1500000){
        printf("%f income have 15 percentage tax",tax);
    }
    if(tax>1500000 && tax<=2000000){
        printf("%f income have 20 percentage tax",tax);
    }
}