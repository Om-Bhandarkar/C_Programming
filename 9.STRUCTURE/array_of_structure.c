// Array of structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cricPlayer
{
    char pName[20];
    int jerNo;
    float rev;
};
void main()
{
    struct cricPlayer obj1 = {"MSDhoni", 7, 45.58};
    struct cricPlayer obj2 = {"Virat", 18, 50.58};
    struct cricPlayer obj3 = {"Rohit", 45, 55.58};

    struct cricPlayer arr[3] = {obj1, obj2, obj3};      // Array of Structure

    for (int i = 0; i < 3; i++)
    {
        printf("Player Name : %s\n",arr[i].pName);
        printf("Jersey No. : %d\n", arr[i].jerNo);
        printf("Revenue : %f\n", arr[i].rev);
        printf("\n");
    }
}
