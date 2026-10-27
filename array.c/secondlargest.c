#include <stdio.h>
int main (){
    int a[8]={1,2,3,4,5,6,7,8};  //ques-find second largest element in given array.
    int max= a[0];

    for(int i=0; i<=7; i++){
        if(a[i]>max){
            max= a[i];
        }
    }

    int secondmax= a[0];
    for(int i=0; i<=7; i++){
        if(a[i]>secondmax && a[i]<max){
            secondmax= a[i];
        }
    }
    
    printf("%d", secondmax);
    return 0;
}