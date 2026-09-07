#include <stdio.h>

int main(){
    int n;
//write a program to accept a number from user and check whether it is power of 2 or not.
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n > 0 && (n & (n - 1)) == 0)
        printf("Power of 2");
    else
        printf("Not a power of 2");

}