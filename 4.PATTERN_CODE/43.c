#include<stdio.h>
void main(){
        int num = 1;


        int row = 5;


        int sum = 0;

        for(int i=1;i<=row;i++){

                for(int j=1;j<=row;j++){
                        int temp = num;
                        while(temp > 0){
                                int retVal = temp % 10;
                                temp = temp / 10;
                                sum = sum + retVal;
                        }
                        if(num % sum == 0){
                                printf("%d",num);
                        }
                }

                printf("\n");

                num = num + 1;

        }

}