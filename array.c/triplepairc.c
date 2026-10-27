#include <stdio.h>
int main (){
    int a[8]={1,2,3,4,5,6,7,8}; 
    //ques-count number of triples in given array whose sum is equal to a given number x.
    int count=0;
    int x=12;

    for(int i=0; i<=7; i++){
        for(int j=i+1; j<=7; j++){
            for(int k=j+1; k<=7; k++){ //i+1 imp.
                if(a[i]+a[j]+a[k]==x){
                    count++;
                    printf("(%d,%d,%d)\n",a[i],a[j],a[k]); //way to print the triples also.
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}