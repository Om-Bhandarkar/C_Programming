#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number : ");
    scanf("%d",&x);
    switch(x){
        case 1:
                printf("One \n");
                break;        
        case 2:
                printf("Two \n");
                break;
        case 3:
                printf("Three \n");
                break;
        case 4:
                printf("Four \n");
                break;
        case 5:
                printf("Five \n");
                break;
        default:
                printf("Wrong input \n");
    }
    return 0;
}