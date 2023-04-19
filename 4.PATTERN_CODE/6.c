#include<stdio.h>
void main(){
        int a = 1;
        int row,col;
        printf("Enter the Row and Column : \n");
        scanf("%d%d",&row,&col);
        for(int i=1;i<=row;i++){
                for(int j=1;j<=col;j++){
                        printf("%d ",a);
                        a++;
                }
                a = a - 3;
                printf("\n");
        }
}