#include <stdio.h>

int main(){
    int n, count;
//write a program to accept an 8-bit number from user and count the number of set bits at positions 0, 2, 4, and 6.
    printf("Enter an 8-bit number: ");
    scanf("%d", &n);

    count = ((n >> 0) & 1)
          + ((n >> 2) & 1)
          + ((n >> 4) & 1)
          + ((n >> 6) & 1);

    printf("Number of set bits = %d", count);


}