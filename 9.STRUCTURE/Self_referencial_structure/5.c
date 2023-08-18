#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct College{
    int stud_Id;
    char branch[20];
    float cgpa;
    struct College *next;
}col;

int main(){
    col *col1 = (col *)malloc(sizeof(col));
    col *col2 = (col *)malloc(sizeof(col));
    col *col3 = (col *)malloc(sizeof(col));

    col *head = col1;
    head->stud_Id = 1206;
    strcpy(head->branch,"E&TC");
    head->cgpa = 7.57;
    head->next = col2;

    head->next->stud_Id = 1306;
    strcpy(head->next->branch,"COMPUTER");
    head->next->cgpa = 8.57;
    head->next->next = col3;

    head->next->next->stud_Id = 1506;
    strcpy(head->next->next->branch,"E&TC");
    head->next->next->cgpa = 9.57;
    head->next->next->next = NULL;

    printf("Student ID : %d\n",head->stud_Id);
    printf("Branch : %s\n",head->branch);
    printf("CGPA : %f\n",head->cgpa);
    printf("\n");
    printf("Student ID : %d\n",head->next->stud_Id);
    printf("Branch : %s\n",head->next->branch);
    printf("CGPA : %f\n",head->next->next->cgpa);
    printf("\n");
    printf("Student ID : %d\n",head->next->next->stud_Id);
    printf("Branch : %s\n",head->next->next->branch);
    printf("Branch : %f\n",head->next->next->cgpa);
    printf("CGPA : %f\n",head->next->next->next->cgpa);
}