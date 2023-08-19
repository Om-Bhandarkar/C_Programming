#include<stdio.h>
struct Player
{
    int jerNo;
    float avg;
    char Pname[20];
};

int main(){
    struct Player obj1 = {07,4.5,"MS Dhoni"};
    struct Player obj2 = {18,4.5,"Virat Kolhi"};
    printf("Jersey No = %d\n",obj1.jerNo);
    printf("Average = %f\n",obj1.avg);
    printf("Player Name = %s\n",obj1.Pname);
    printf("Jersey No = %d\n",obj2.jerNo);
    printf("Average = %f\n",obj2.avg);
    printf("Player Name = %s\n",obj2.Pname);
    
}