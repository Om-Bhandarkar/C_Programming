//  	                    1
//  	                    2 2
//  	                    3 3 3
//  	                    4 4 4 4
#include<stdio.h>
void main(){
    int row,col;
    printf("Enter the row and column : \n");
    scanf("%d%d",&row,&col);
    int a = 1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
        }
        a++;
        printf("\n");
    }
}