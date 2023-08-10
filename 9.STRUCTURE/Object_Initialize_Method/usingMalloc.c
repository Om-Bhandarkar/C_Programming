// Object Intialize Method using malloc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Society
{
    char sNmae[20];
    int wings;
    float avgRent;
};

int main()
{
    struct Society *ptr = (struct Society *)malloc(sizeof(struct Society));
    strcpy((*ptr).sNmae, "Aswani Galaxy");
    (*ptr).wings = 10;
    (*ptr).avgRent = 60.00;

    printf("Society Name : %s\n", ptr->sNmae);
    printf("Wings : %d\n", ptr->wings);
    printf("Average Rent : %f\n", ptr->avgRent);

    return 0;
}