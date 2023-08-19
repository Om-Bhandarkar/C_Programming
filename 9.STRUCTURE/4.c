#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct IPL{
    char SName[20];
    int tTeams;
    float price;
};
int main(){
    struct IPL *ptr = (struct IPL *)malloc(sizeof(struct IPL));
    strcpy((*ptr).SName,"Tata");
    ptr -> tTeams = 8;
    (*ptr).price = 10.00;
    printf("%s\n",ptr->SName);
    printf("%d\n",ptr->tTeams);
    printf("%lf\n",ptr->price);
    return 0;
}