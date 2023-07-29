#include<stdio.h>
int main(){
    char *str = "Virat";  //constant
    printf("%c\n",str[2]);
    str[2] = 'k';
    printf("%c\n",str[2]); // Segmentation fault
}