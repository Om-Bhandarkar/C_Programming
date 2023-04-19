#include<stdio.h>
void main(){
        int row,col;
        printf("Enter the Row and Column : \n");
        scanf("%d%d",&row,&col);
        char ch = 'A';
        for(int i=1;i<=row;i++){
                for(int j=1;j<=col;j++){
                        printf("%c ",ch);
                        ch++;
                }
                ch = ch - 3;
                printf("\n");
        }
}