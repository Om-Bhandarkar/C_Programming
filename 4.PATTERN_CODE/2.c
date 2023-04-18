//                      1 2 3 
//                      4 5 6 
//                      7 8 9

#include<stdio.h>
int main(){
    int row;
    int col;
    printf("Enter Row & Column : ");
    scanf("%d%d",&row,&col);    
    int a = 1;
    for(int i =1;i<=row;i++){
        for(int j =1;j<=col;j++){
             printf("%d ",a);
        }
             a++;
        printf("\n");
    }

    return 0;
 }