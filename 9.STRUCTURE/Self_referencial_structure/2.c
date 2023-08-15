#include<stdio.h>
#include<string.h>
typedef struct Employee{
    int empId;
    char empName[30];
    float sal;
    struct Employee *next;
}emp;
int main(){
    emp obj1,obj2,obj3;

    emp *head = &obj1;

    head -> empId = 6;
    strcpy(head->empName,"Om");
    head -> sal = 70.00;
    head -> next = &obj2;

    head -> next -> empId = 2;
    strcpy(head->next->empName,"Mohit");
    head -> next -> sal = 90.00;
    head -> next -> next = &obj3;

    head -> next -> next -> empId = 27;
    strcpy(head->next->next->empName,"Jagannath");
    head -> next -> next -> sal = 80.00;
    head -> next -> next -> next = NULL;

    printf("Employee ID : %d\n",head->empId);
    printf("Employee Name : %s\n",head->empName);
    printf("Employee Salary : %f\n",head->sal);
    printf("\n");
    printf("Employee ID : %d\n",head->next->empId);
    printf("Employee Name : %s\n",head->next->empName);
    printf("Employee Salary : %f\n",head->next->sal);
    printf("\n");
    printf("Employee ID : %d\n",head->next->next->empId);
    printf("Employee Name : %s\n",head->next->next->empName);
    printf("Employee Salary : %f\n",head->next->next->sal);

    return 0;

}