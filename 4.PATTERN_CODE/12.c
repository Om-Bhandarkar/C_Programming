#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the Row and Column :\n");
    scanf("%d%d",&row,&col);
    for(int i = 1;i<=row;i++){
        int a = 4;
        char ch = 'D';
        for (int j= 1;j<=col;j++){
            printf("%c%d ",ch,a);
                ch--;
                a--;
        }
        printf("\n");
    }
}