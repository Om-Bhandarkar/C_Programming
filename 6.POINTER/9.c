// 3-Dimentional Array

#include<stdio.h>
void main(){
    int arr[2][3][3];
    printf("Enter the Array Elements : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                scanf("%d",&arr[i][j][k]);
            }   
        }
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("| %d |",*(*(*(arr+i)+j)+k));
            }   
            printf("\n");
        }
        printf("\n");
    }
}