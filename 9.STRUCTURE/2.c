#include<stdio.h>
#pragma pack(4)
struct Node{
    int data;
    char name[20];
    float rev;
};
void main(){
    printf("%ld",sizeof(struct Node));
}