#include<stdio.h>
void main(){
    int row;
    printf("Enter Row : ");
    scanf("%d",&row);
    int num = 5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d",num);
            num++;
        }
        num = num - i;
        printf("\n");
    }
}
