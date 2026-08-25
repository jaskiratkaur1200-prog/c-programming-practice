#include <stdio.h>
int main() {
    int a,b;
    printf("enter dividend and divisor");
    scanf("%d %d", &a, &b);
    int quotient = a / b;
    int remainder = a % b;
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
}