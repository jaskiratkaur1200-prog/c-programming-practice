#include <stdio.h>
int main(){
    int a[5]={5,4,6,1,8}; //ques-count number of elements in given array grater then a num x.
    int count=0;
    int x=2;

    for(int i=0; i<5; i++){
        if(a[i]>x){
            count++;
        }
    }
    printf("%d",count); //output is 4
    return 0;
}