#include<stdio.h>
int main(){
    char name[100];
    printf("Enter Name : ");
    // scanf("%s",name); // using scanf
    gets(name);          //using gets
    fgets(name,25,stdin);//using fgets
    printf("Hello Mr. %s",name);
    return 0;
}