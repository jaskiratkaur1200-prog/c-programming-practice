#include <stdio.h>

int main(){
    int num, n;
//write a program to accept a number and bit position n from user and toggle the nth bit.
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &n);

    num = num ^ (1 << n);

    printf("Number after toggling bit = %d", num);
}