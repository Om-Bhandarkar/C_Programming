/*
    1) Void pointer is known as generic pointer.
    2) void pointer use in malloc.(return type of malloc is (void *)).
    3) dereference is not allowed for void pointer.
    4) void pointer can be dereference with the help of type-cast.
*/
#include <stdio.h>
int main()
{
    int x = 10;
    void *vptr = &x;
    // printf("%d",*vptr);  // error : dereference not allowed
    printf("%d", *((int *)vptr));
    return 0;
}