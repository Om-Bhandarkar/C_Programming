// Pointer to a Structure

#include <stdio.h>
struct Movie
{
    char mName[20];
    int count;
    float price;
} obj1 = {"Kantara", 5, 150.00};
int main()
{
    struct Movie *sptr = &obj1; // structure pointer
    puts(obj1.mName);
    printf("%d\n", obj1.count);
    printf("%f\n", obj1.price);
    return 0;
}