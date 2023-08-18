#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Employee{
    int empId;
    char empName[20];
    float sal;
}emp;
void getData(emp *ptr){
    printf("Enter ID : \n");
    scanf("%d",ptr->empId);
    printf("Enter Name : \n");
    gets(ptr->empName);
    printf("Enter Salary : \n");
    scanf("%f",&ptr->sal);
}
void printData(emp *ptr){
    printf("%d\n",ptr->empId);
    puts(ptr->empName);
    printf("%f\n",ptr->sal);
}
void main(){
    emp *emp1 = (emp *)malloc(sizeof(emp));
    emp *emp2 = (emp *)malloc(sizeof(emp));
    emp *emp3 = (emp *)malloc(sizeof(emp));

    getData(emp1);
    getData(emp2);
    getData(emp3);

    printData(emp1);
    printData(emp2);
    printData(emp3);

}