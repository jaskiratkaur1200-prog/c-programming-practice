#include <stdio.h>
int main (){
    int n,position;
    //write a program to accept a number and bit position n from user and set the nth bit to 1.
    printf("Enter a number and position: ");
    scanf("%d %d",&n, &position);
    n= n | (1<<position);
    printf("Number after setting bit: %d", n);
}