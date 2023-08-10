#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cricPlayer
{
    char pName[10];
    int jerNo;
    float avg;
}obj1 = {"MSDhoni",07,45.48};

int main(){
    struct cricPlayer obj2 = {"Virat",18,50.33};
    printf("%s\n",obj1.pName); 
    printf("%d\n",obj1.jerNo); 
    printf("%f\n",obj1.avg); 
    printf("%s\n",obj2.pName); 
    printf("%d\n",obj2.jerNo); 
    printf("%f\n",obj2.avg); 
    return 0;
}