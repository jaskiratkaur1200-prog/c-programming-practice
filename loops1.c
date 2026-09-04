#include <stdio.h>
int main (){
    int n,factorial=1,i; //print factorial of a number.
    printf("enter a number:");
    scanf("%d",&n);
    for( i=1; i<=n ; i++){
        factorial=factorial*i;
    
    }
    printf("factorial of %d is %d",n,factorial);
}