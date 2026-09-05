#include <stdio.h>
int main (){
    int n;  //print nth Fibonacci number(1,1,2,3,5,8,...)-1 1 fix then adding last and sec last number..
    printf("enter a number:");
    scanf("%d",&n);
    int a =1;
    int b =1;
    int sum =1;
    for(int i=1; i<=n-2 ; i++){
        sum = a+b;
        a=b;
        b=sum;

    }
       printf("nth Fibonacci number is %d",sum);     

}