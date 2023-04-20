//                          4 4 4 4
//                          3 3 3 3
//                          2 2 2 2
//                          1 1 1 1
#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the Row and Column :\n");
    scanf("%d%d",&row,&col);
    int a = 4;
    for(int i = 0;i<row;i++){
        for (int j= 0;j<col;j++){
               printf("%d ",a);
        }
        a--;
        printf("\n");
    }
}                   