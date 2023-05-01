//Array of pointer
#include<stdio.h>
void main(){
    int x = 10;
    char ch = 'A';
    double d = 20.85;
    void *ptr[3] = {&x,&ch,&d};
    printf("Size = %ld\n",sizeof(ptr));
    printf("%p\n",ptr[0]);
    printf("%p\n",ptr[1]);
    printf("%p\n",ptr[2]);
    printf("%d\n",*((int*)ptr[0]));
    printf("%c\n",*((char*)ptr[1])); //Firstly Memory Alloted to character datatype 
    printf("%lf\n",*((double*)ptr[2]));
}