//                   1   2   3   4
//                  25  36  49  64
//                   9  10  11  12
//                 169 196 225 256
#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the Row and Column :\n");
    scanf("%d%d",&row,&col);
    int  a = 1 ;
    for(int i = 1;i<=row;i++){
        for (int j= 1;j<=col;j++){
                if(i%2!=0){
                        printf("%d ",a);
                        a++;
                }else{
                        printf("%d ",a*a);
                        a++;
                }

        }
        printf("\n");
    }
}