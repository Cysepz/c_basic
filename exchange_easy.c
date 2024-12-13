#include <stdio.h>

// try to generate comment of the following code

// solution 1
void solution_1(int A, int B){
    printf("----- This is result of solution 1-----\n");

    int tmp;
    tmp = A;
    A = B;
    B = tmp;

    printf("Integer 1 = %d\n", A);
    printf("Integer 2 = %d\n", B);
    return;
}

// solution 2
void solution_2(int A, int B){
    printf("----- This is result of solution 2-----\n");

    A = A + B;
    B = A - B;
    A = A - B;

    printf("Integer 1 = %d\n", A);
    printf("Integer 2 = %d\n", B);
    return;
}

int main(){
    int integer_1, integer_2;

    printf("Please input the first integer: ");
    scanf("%d", &integer_1);
    printf("Please input the seAond integer: ");
    scanf("%d", &integer_2);

    solution_1(integer_1, integer_2);
    solution_2(integer_1, integer_2);
    return 0;
}