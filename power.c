#include <stdio.h>
int main (){
    int a,b,power=1;
    //write program to find the value of one number raised to the power of another.
    printf("Enter the base:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    // Add logic to calculate power here
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    printf("%d to the power of %d is %d",a,b,power);
    
}