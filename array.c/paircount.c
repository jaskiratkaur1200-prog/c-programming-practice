#include <stdio.h>
int main (){
    int a[8]= {1,2,3,4,5,6,7,8};
    //ques-count number of pairs in given array whose sum is equal to a given number x.

    int count=0;
    int x=12;

    for(int i=0; i<=7; i++){
        for(int j=i+1; j<=7; j++){ //i+1 imp.
            if(a[i]+a[j]==x){
                count++;
                printf("(%d,%d)\n",a[i],a[j]); //way to print the pairs also.
            }
        }
    }

    printf("%d", count);
    return 0;
}