//                                  *     * * * * 
//                                  *     *       
//                                  *     *       
//                                  * * * * * * * 
//                                        *     * 
//                                        *     * 
//                                  * * * *     *


#include<stdio.h>
void main(){
    int n = 7;
    int mid = n / 2 + 1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==mid || j==mid || (i==1 && j>=mid) || (j==1 && i<=mid) || (i==n && j<=mid) || (j==n && i>=mid)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}