#include <stdio.h>
int main(){
    int n,factorial=1;//print factorial of first n numbers.
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        factorial=factorial*i;
        printf("factorial of %d is %d\n",i,factorial);
    }
}