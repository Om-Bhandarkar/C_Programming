#include<stdio.h>
int main(){
    char cName[] = {'V','i','r','a','t','\0'};
    char *fname1 = "Messi";
    char *fname2 = "Rolando";
    char *fname3 = "Neymar";
    printf("%p\n%p\n%p\n",fname1,fname2,fname3);
    printf("%s\n%s\n%s\n",fname1,fname2,fname3);
}