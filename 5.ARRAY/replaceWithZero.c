// Replace all 0's with 5
#include<stdio.h>
int convertToFive(int n){
    int retVal;
    while(n != 0){
        retVal = n % 10;
        printf("%d",retVal);
        n = n / 10;
    }
}
int main(){
    int n;
    printf("Enter Number :\n");
    scanf("%d",&n);
    int retval;
    while(n!= 0){
        retval = n % 10;
        if(retval == 0){
            retval = 5;
        }
        convertToFive(retval);
        n = n / 10;
    }
}

