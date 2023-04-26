//              4
//              3 3
//              2 2 2
//              1 1 1 1
#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the row and column : \n");
    scanf("%d%d",&row,&col);
    int a = 4;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
        }
        a--;
        printf("\n");
    }
}