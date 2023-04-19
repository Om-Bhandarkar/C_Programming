#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the row and column : \n");
    scanf("%d%d",&row,&col);
    for(int i=1;i<=row;i++){
        int a = 1;
        for(int j=1;j<=col;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }   
}
