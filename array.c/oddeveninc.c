#include <stdio.h>
int main (){
    int arr[6] = {1, 2, 3, 4, 5, 6};  //ques-multiply even index elements by 2 and increment 10 to odd index elements.
    for(int i=0; i<6; i++){
        if(i%2==0){
            arr[i]= arr[i]*2;
    }
    else{
        arr[i]= arr[i]+10;
    }
}

    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }
   
    return 0;
}