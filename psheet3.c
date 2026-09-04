#include <stdio.h>
int main (){
    int n; 
    //etermine whether a number is odd or even using bitwise AND &, without %.
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n&1) //either n&1 is 1 or 0
        printf("The number is odd");
    else
        printf("The number is even");

}