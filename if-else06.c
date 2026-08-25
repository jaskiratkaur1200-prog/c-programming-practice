#include <stdio.h>

int main() {
    int sp, cp;
    printf("Enter cost price: ");
    scanf("%d", &cp);

    printf("Enter selling price: ");
    scanf("%d", &sp);

    if (sp > cp) {
        printf("Profit");
    } else if (cp > sp) {
        printf("Loss");
    } else {
        printf("No profit, no loss");
    }
}