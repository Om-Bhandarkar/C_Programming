#include<stdio.h>
int main(){
    FILE *fptr = fopen("om.txt","w");
    FILE *fp = fopen("om.txt","r");
    printf("%p\n",fptr);
    printf("%p\n",fp);
    return 0;
}