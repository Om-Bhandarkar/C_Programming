#include <stdio.h>
int main(){
    int inputArray[100];
    int i, j, size, count = 0;

    printf("Enter size of array\n");
    scanf("%d", &size);
    printf("Enter %d numbers\n", size);

    for (i = 0; i < size; i++){
        scanf("%d", &inputArray[i]);
    }
    for (i = 0; i < size; i++){
        for (j = i + 1; j < size; j++){
            if (inputArray[i] == inputArray[j]){
                printf("Duplicate Element is %d\n",inputArray[j]);
                count++;

                break;
            }
        }
    }

    printf("Duplicate Element Count : %d\n", count);
    return 0;
}
