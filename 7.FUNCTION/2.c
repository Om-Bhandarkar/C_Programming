#include<stdio.h>
void fun(int x){
    printf("%d\n",x);
}
void main(){
    fun('A');
    fun(10);
    fun(20.5F);
    fun(35.50);

}