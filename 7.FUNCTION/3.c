#include<stdio.h>
void funarr(int *ptr){
    for(int i=0;i<5;i++){
        printf("| %d |",*(ptr+i));
    }
}
void main(){
    int arr[5] = {10,20,30,40,50};
    funarr(arr);

}