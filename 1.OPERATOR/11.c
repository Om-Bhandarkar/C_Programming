#include<stdio.h>
void main(){
    int x = 7;
    int ans;
    ans = ++x + x++ + ++x + x++ + x++;
    printf("%d\n",ans);
    printf("%d\n",x);
}