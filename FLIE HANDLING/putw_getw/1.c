#include<stdio.h>
int main(){
    FILE *fp = fopen("om.txt","r");
    char ch;
    while((ch = fgetc(fp))!=EOF){
        printf("%c",ch);
    }
}