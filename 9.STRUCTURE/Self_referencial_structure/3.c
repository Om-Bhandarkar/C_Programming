#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Movie{
    char mName[20];
    float imdb;
    struct Movie *next;
}mov;
int main(){
    mov *mov1 = (mov *)malloc(sizeof(mov));
    mov *mov2 = (mov *)malloc(sizeof(mov));
    mov *mov3 = (mov *)malloc(sizeof(mov));

    mov *head = mov1;
    strcpy(head -> mName,"Gadar");
    head -> imdb = 7.7;
    head -> next = mov2; 

    strcpy(head -> next -> mName,"OMG");
    head -> next -> imdb = 7.9;
    head -> next -> next = mov3; 

    strcpy(head -> next -> next -> mName,"Tumbaad");
    head -> next -> next -> imdb = 8.9;
    head -> next -> next -> next = NULL; 

    printf("Movie Name : %s\n",head->mName);
    printf("IMDB rating : %f\n",head->imdb);

    printf("Movie Name : %s\n",head->next->mName);
    printf("IMDB rating : %f\n",head->next->imdb);

    printf("Movie Name : %s\n",head->next->next->mName);
    printf("IMDB rating : %f\n",head->next->next->imdb);

    return 0;
}