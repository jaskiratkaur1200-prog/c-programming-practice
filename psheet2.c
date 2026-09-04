#include <stdio.h>

int main(){
    int n, count;
//exactly the same concept as Question 1, but now there are 8 bits.
    printf("Enter an 8-bit number: ");
    scanf("%d", &n);

    count = (n & 1)
          + ((n >> 1) & 1) 
          + ((n >> 2) & 1)
          + ((n >> 3) & 1)
          + ((n >> 4) & 1)
          + ((n >> 5) & 1)
          + ((n >> 6) & 1)
          + ((n >> 7) & 1);

    printf("Number of 1 bits = %d", count);

}