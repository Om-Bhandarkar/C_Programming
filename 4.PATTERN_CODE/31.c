//                       *       * 
//                         *   *   
//                           *     
//                         *   *   
//                       *       * 
#include<stdio.h>
void main(){
    int n ;
    printf("Enter the value : ");
    scanf("%d",&n);
    int mid = n / 2 + 1;  
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || j==n-i+1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}