//                          c b a
//                          3 2 1
//                          c b a
//                          3 2 1
#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the Row and Column :\n");
    scanf("%d%d",&row,&col);
    //int a = 3;
    //char ch = 'c';
    for(int i = 0;i<row;i++){
    char ch = 'c';
    int a = 3;
        for (int j= 0;j<col;j++){
                if(i%2==0){
                        printf("%c ",ch);
                        ch--;
                }else{
                        printf("%d ",a);
                        a--;
                }
        }
        printf("\n");
    }
}