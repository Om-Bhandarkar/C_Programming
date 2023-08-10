#include<stdio.h>
char *mystrcpy(char *dest,char *src){
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest;
}
void main(){
    char *str1 = "MS Dhoni";
    char str2[20];
    puts(str1);
    mystrcpy(str2,str1);
    puts(str1);
    puts(str2);
}