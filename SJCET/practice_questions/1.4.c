#include <stdio.h>

int main() {
    /* 1.4 If cost price and selling price of an item are input through the keyboard, 
    write a program to determine whether the seller has made profit or incurred loss. 
    Also determine how much profit he made or loss he incurred.*/

    int profit,loss, costPrice,sellPrice;

    printf("Enter the cost of the item: ");
    scanf("%d", &costPrice);
    
    printf("Enter the price at which the item was sold: ");
    scanf("%d", &sellPrice);
    
    if (costPrice > sellPrice) {
        loss = costPrice - sellPrice;
        printf("You made a loss💀. \nLoss: %d\n", loss);
    } 
    else if (costPrice == sellPrice) {
        printf("Neither loss nor profit was made🫠.\n");
    } 
    else {
        profit = sellPrice - costPrice;
        printf("You made a profit✨. \nProfit: %d\n", profit);
    }

    return 0;
}


    // idk if i should use snake_case or camelCase for variables. I dont think they really matter.
    // Depends on the language. C uses camelCase so I guess thats better
