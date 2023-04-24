//                      1 2 3 4
//                      1 3 5 7
//                      1 4 7 10
//                      1 5 9 13


#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the Row and Column : \n");
    scanf("%d%d",&row,&col);
    for(int i = 1;i<=row;i++){
        int a = 1;
        for(int j=1;j<=col;j++){
           if(i==1){
            printf("%d ",a);
            a++;
           }else{
            printf("%d ",a);
            a = a + i;
           }
        }
        printf("\n");
    }
}