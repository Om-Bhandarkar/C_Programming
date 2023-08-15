#include<stdio.h>
int main(){
    FILE *fp = fopen("om.txt","w");
    char ch;
    fscanf(stdin,"%c",&ch);
    printf("%c\n",ch);
    return 0;
}