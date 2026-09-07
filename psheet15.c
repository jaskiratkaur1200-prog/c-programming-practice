#include <stdio.h>

int main(){
    int n, result;
//write a program to accept an 8-bit number from user and exchange its upper 4 bits with lower 4 bits.

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);

    result = ((n & 0x0F) << 4)
           | ((n & 0xF0) >> 4);

    printf("After nibble swap = %d", result);

}