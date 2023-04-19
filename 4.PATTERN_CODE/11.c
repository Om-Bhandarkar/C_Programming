#include<stdio.h>
void main(){
        int row,col;
        printf("Enter the Row and Column :\n");
        scanf("%d%d",&row,&col);
        int a = 1;
        for(int i=1;i<=row;i++){
                for(int j=1;j<=col;j++){
                        printf("%d ",a);
                        a = a + 2;
                }
                printf("\n");
        }
}