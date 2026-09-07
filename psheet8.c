#include <stdio.h>

int main(){
    int num, result;
//write a program to accept a number from user and display the value of last 4 bits.
    printf("Enter number: ");
    scanf("%d", &num);

    result = num & 15;

    printf("Value of last 4 bits = %d", result);
}