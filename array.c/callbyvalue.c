#include <stdio.h>

void change(int x) // if you change it inside the function, the original variable does not change.
{
    x = 20;
}

int main()
{
    int a = 10;

    change(a);

    printf("%d", a);
    return 0;
}