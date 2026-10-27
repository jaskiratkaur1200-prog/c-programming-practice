#include <stdio.h>
void fun(int x[]){ //this is call by reference(if you change it inside the fucntion it will change the value in main function also)
    x[0] = 17;
    return;
}
int main(){
    int a[3]={5, 10, 15};
    printf("%d\n",a[0]);
    fun(a);
    printf("%d\n",a[0]);
    return 0;
}