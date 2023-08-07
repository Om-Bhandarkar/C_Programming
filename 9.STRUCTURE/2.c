#include<stdio.h>
struct Demo1{
    int x;
    float y;
    double z;
}obj1;
union Demo2{
    int x;
    float y;
    double z;
}obj2;

int main(){
    printf("Structure size = %ld\n",sizeof(obj1));
    printf("Union Size = %ld\n",sizeof(obj2));
    return 0;
}