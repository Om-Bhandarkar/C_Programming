#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void addNode(){
    struct Node *newNode = (struct Node *) malloc (sizeof(struct Node));
    printf("Enter Data : ");
    scanf("%d",&newNode->data);
    if(head==NULL){
        head = newNode;
    }else{
        struct Node *temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newNode;
    }
    
}
void printLL(){
    struct Node* temp = head;
    while(temp != NULL){
        printf("|%d|->",temp->data);
        temp=temp->next;
    }
}
int main(){
    addNode();
    addNode();
    addNode();
    // void printLL();
    return 0;
}