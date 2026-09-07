#include <stdio.h>

int main(){
    int n;
//check whether 4th and 5th both bits are set. 
    printf("Enter an integer: ");
    scanf("%d", &n);

    if ((n & (1 << 3)) && (n & (1 << 4)))
        printf("Both 4th and 5th bits are set");
    else
        printf("Both bits are not set");
}