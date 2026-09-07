#include <stdio.h>

int main(){
    int a, b;
// Swap two integers without a third variable and without arithmetic operators.
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d", b);
}