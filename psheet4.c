#include <stdio.h>
int main (){
    int n,position; //write a program to accept a number and bit position n from user and check if the nth bit is 0 or 1 using bitwise AND.
    printf("Enter a number and position: ");
    scanf("%d %d",&n, &position);
    printf("Bit at position %d is %d", position, (n & (n>>position)));

}