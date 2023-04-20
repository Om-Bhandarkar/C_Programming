//                      I H G
//                      F E D
//                      C B A
#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the Row and Column :\n");
    scanf("%d%d",&row,&col);
    char ch = 'I';
    for(int i = 0;i<row;i++){
        for (int j= 0;j<col;j++){
               printf("%c ",ch);
               ch--;
        }
        printf("\n");
    }
}