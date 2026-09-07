#include <stdio.h>

int main(){
    int a, b;
//Determine whether two integers have different signs using XOR.
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if ((a ^ b) < 0)
        printf("Numbers have different signs");
    else
        printf("Numbers have same signs");

}