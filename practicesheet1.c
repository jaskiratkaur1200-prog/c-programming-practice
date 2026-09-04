#include <stdio.h>
//ques-Accept a number between 0 and 15 and count how many 1s are present in its 4-bit binary representation.
int main(){
    int n, b1, b2, b3, b4, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    b1 = n & 1; //checks the last,rightmost bit.
    b2 = (n >> 1) & 1; 
    b3 = (n >> 2) & 1;
    b4 = (n >> 3) & 1; //or: count= (n&1) + ((n>>1)&1) + ((n>>2)&1) + ((n>>3)&1);

    count = b1 + b2 + b3 + b4;

    printf("Number of 1 bits = %d", count);

}