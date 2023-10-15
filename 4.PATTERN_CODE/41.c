//                                  A b C d E
//                                  e D c B
//                                  B c D
//                                  d C
//                                  C        

#include <stdio.h>
void main()
{
    char ch = 'A'; 
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            if (i % 2 != 0){
                if(j%2==0){
                    printf("%c", ch+32);
                }
                else{
                    printf("%c", ch);
                }
                ch++;
            }else{
                ch--;
                if(j%2!=0){
                    printf("%c", ch+32);
                }else{
                    printf("%c", ch);
                }
            }
        }
        printf("\n");
    }
}
