#include <stdio.h>
int main(){
    for(int i=65;i<=90;i++){
        char ch= (char)i; //thi is called type casting, converting value from one data type to another data type.
        printf("ASCII value of %c is %d\n",ch,i);
    }
}