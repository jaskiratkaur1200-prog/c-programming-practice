#include <stdio.h>

int main()
{
    int n, rev;

    printf("Enter number (0-15): ");
    scanf("%d", &n);

    rev = ((n & 1) << 3)
        | ((n & 2) << 1)
        | ((n & 4) >> 1)
        | ((n & 8) >> 3);

    printf("Reversed 4-bit number = %d", rev);
}