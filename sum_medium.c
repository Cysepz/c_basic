#include <stdio.h>

// Saving more memory space in this way
// Wasting more efficiency of CPU (cuz the process need to copy the numerous more times)
int main(){
    int integer, sum;
    for(int i = 0; i < 5; i++){
        printf("Please input No. %d integer:", i+1);
        scanf("%d", &integer);

        if(i == 0){
            sum = integer;
        } else{
            sum = sum + integer;
        }
    }
    printf("Sum is %d\n", sum);

    return 0;
}