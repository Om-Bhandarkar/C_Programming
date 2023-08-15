#include<stdio.h>
int main(){
    FILE *fptr = fopen("c2w.txt","w");
    fprintf(fptr,"I am leaning C with Core2Web");
    fprintf(stdout,"Done..!");

    return 0;
}