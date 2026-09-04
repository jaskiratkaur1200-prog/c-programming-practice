#include <stdio.h>
int main(){
    int n,sum=0;
    printf("enter a number: "); //sum of: 1-2+3-4+5-6.....nth.
    scanf("%d",&n);
    if(n%2==0){
        sum=-n/2;
    }
    else{
        sum=-n/2 +n;
    }
    printf("sum is: %d",sum);

}