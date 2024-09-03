#include <stdio.h>

int main(){
    int integerA;
    int integerB;
    int sum;

    printf("Please input the first integer:");
    scanf("%d", &integerA);

    printf("Please input the second integer:");
    scanf("%d", &integerB);

    sum = integerA + integerB;

    printf("Sum is %d \n", sum);
    return 0;
}