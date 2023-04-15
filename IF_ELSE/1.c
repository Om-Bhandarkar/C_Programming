#include<stdio.h>
void main(){
    char ch;
    printf("Enter the Character \n");
    scanf("%c",&ch);
    if(ch >='a' && ch <='z'){
        printf("Enter character is %c in smaller-case",ch);
    }else{
        printf("Enter character is %c in upper-case",ch);
    }
}