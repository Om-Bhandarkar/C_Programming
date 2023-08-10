#include<stdio.h>
char *mystrupr(char *str){
    while(*str != '\0'){
        if(*str > 97 && *str <= 122){
            *str = *str - 32;
        }
        str++;
    }
    return str;
}
int main(){
    char carr[] = {'M','s','D','H','o','N','I','\0'};
    puts(carr);
    mystrupr(carr);
    puts(carr);
}