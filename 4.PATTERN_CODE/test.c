#include<stdio.h>

void main(){

    int row =5;
    int t;
    // printf("Enter Row : ");
    // scanf("%d",&row);
    int num = 5;
    for(int i=1;i<=row;i++){
        t = num;
        for(int j=1;j<=i;j++){
            printf("%d ",t);
            t = t + i;
        }
        num++;
        printf("\n");
    }
}