#include <stdio.h>
int main (){
    int arr[5]={2,6,3,8,1};
     //ques-sum of elements at even and odd indices nd then find the difference between them.

    int sumeven= 0;
    int sumodd=0;

    for (int i=0; i<5; i++){
        if(i%2==0){
            sumeven= arr[i]+ sumeven;
        }
        else{
            sumodd= sumodd + arr[i];
        }
    }

    int diff=  sumeven - sumodd;
    printf("%d", diff);

    return 0;
}