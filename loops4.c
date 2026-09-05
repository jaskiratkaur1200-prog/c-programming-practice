#include <stdio.h>
int main (){
    int n;  //print first n Fibonacci numbers(1,1,2,3,5,8,...)-1 1 fix then adding last and sec last number..
    printf("enter a number:");
    scanf("%d",&n);
    int a =1;
    int b =1;
    int sum =1;
    printf("1st Fibonacci number is %d\n",a);
    printf("2nd Fibonacci number is %d\n",b);
    for(int i=1; i<=n-2 ; i++){
        sum = a+b;
        a=b;
        b=sum;
        printf("%dnd Fibonacci number is %d\n",i+2,sum);     

    }
}