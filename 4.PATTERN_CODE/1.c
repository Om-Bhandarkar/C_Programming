#include<stdio.h>
int main(){
    int row;
    int col;
    printf("Enter Row & Column : ");
    scanf("%d%d",&row,&col);    

    for(int i =1;i<=row;i++){
        for(int j =1;j<=col;j++){
             printf("* ");
        }
        printf("\n");
    }
    return 0;
 }