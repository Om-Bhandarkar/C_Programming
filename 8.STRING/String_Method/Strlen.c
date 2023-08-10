//Strlen  

#include<stdio.h>
int mystrlen(char *);
void main(){
    char name[10] = {'M','S','D','h','o','n','i','\0'};
    char *str = "Virat Kohli";
    printf("Size is %d\n",mystrlen(name)); 
    printf("Size is %d\n",mystrlen(str)); 
}
int mystrlen(char *str){
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    return count;
}

