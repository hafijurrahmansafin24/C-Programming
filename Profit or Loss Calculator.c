#include <stdio.h>

int main() {
    int cost, sell;

    printf("Enter cost price: ");
    scanf("%d", &cost);

    printf("Enter selling price: ");
    scanf("%d", &sell);

    if (sell > cost){
        printf("Profit = %d\n", sell - cost);
    }else if (sell < cost){
        printf("Loss = %d\n", cost - sell);
    }else{
        printf("No profit no loss\n");
    }

    return 0;
}
