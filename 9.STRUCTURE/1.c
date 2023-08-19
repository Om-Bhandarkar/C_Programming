#include<stdio.h>
struct Node{
    int data;
    char name[20];
    float rev;
};
void main(){
    printf("%ld",sizeof(struct Node));// Wastage of memory
}