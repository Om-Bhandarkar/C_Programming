#include<stdio.h>
char *mystrlwr(char *str){
    while(*str != '\0'){
        if(*str > 65 && *str <= 90){
            *str = *str + 32;
        }
        str++;
    }
    return str;
}
int main(){
    char carr[] = {'M','s','D','H','o','N','I','\0'};
    puts(carr);
    mystrlwr(carr);
    puts(carr);
}