//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;
    printf("enter selling price="); 
    scanf("%f" , &sellingPrice);
    printf("enter cost price=");
    scanf("%f", &costPrice);


    if (costPrice <= 0) {
        printf("Invalid Cost Price");
    } else if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.2f%%\n", percentage);
    } else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.2f%%\n", percentage);
    } else {
        printf("No Profit No Loss");
    }

    return 0;
}
