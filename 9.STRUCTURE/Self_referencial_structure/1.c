#include<stdio.h>
#include<string.h>
typedef struct Player{
    int jerNo;
    char pName[20];
    float avg;
    struct Player *next;                //Self Referencial Structure
}Play;
int main(){
    Play obj1,obj2,obj3;

    struct Player *head = &obj1;

    obj1.jerNo = 7;
    strcpy(obj1.pName,"MS_Dhoni");
    obj1.avg = 7.77;
    obj1.next = &obj2;

    obj2.jerNo = 18;
    strcpy(obj2.pName,"Virat");
    obj2.avg = 8.88;
    obj2.next = &obj3;

    obj3.jerNo = 45;
    strcpy(obj3.pName,"Rohit");
    obj3.avg = 4.44;
    obj3.next = NULL;

    printf("Jersey No. %d\n",head->jerNo);
    printf("Player Name : %s\n",head->pName);
    printf("Average is %f\n",head->avg);
    printf("\n");
    printf("Jersey No. %d\n",(obj1.next)->jerNo);
    printf("Player Name : %s\n",(obj1.next)->pName);
    printf("Average is %f\n",(obj1.next)->avg);
    printf("\n");
    printf("Jersey No. %d\n",(obj2.next)->jerNo);
    printf("Player Name : %s\n",(obj2.next)->pName);
    printf("Average is %f\n",(obj2.next)->avg);
 
    return 0;
}