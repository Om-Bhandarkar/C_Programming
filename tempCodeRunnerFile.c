#include<stdio.h>
#include<stdlib.h>

int main(){
    int number_of_students = 5;
    int* marks = (int *)malloc(number_of_students * sizeof(int));
    int student = 0;
    while(student < number_of_students){
        scanf("%d", (marks + student));
    }
    student++;
    printf("%d\n",*marks);

    return 0;
}