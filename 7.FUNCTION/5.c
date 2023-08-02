// Passing Function as a parameter to function
#include<stdio.h>
void add(int x, int y){
    printf("%d",x+y);
}
void fun(int x,int y,void (*ptr) (int,int)){
    ptr(x,y);
}
int main(){
    fun(10,20,add);
    return 0;
}