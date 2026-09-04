#include <stdio.h>
int main(){
    int n, position;
    printf("Enter a number and position: "); //write a program to accept a number and bit position n from user and clear the nth bit to 0.
    scanf("%d %d", &n, &position);
    n = n & ~(1 << position);
    printf("Number after clearing bit: %d", n);
}