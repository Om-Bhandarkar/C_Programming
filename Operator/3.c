#include<stdio.h>
void main(){
    int x = 5;
    int ans;
    printf("%d\n",x);
    x = x++ + x++;
    printf("%d\n",x);
    printf("%d\n",ans);
}