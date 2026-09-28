#include <stdio.h>

main() {
    float GST_RATE = 0.18f; 
    float basePrice = 450.0f;
    float gstAmount = basePrice * GST_RATE;
    float finalPrice = basePrice + gstAmount;

    printf("Base Price  : Rs. %.2f\n", basePrice);
    printf("GST (18%%)   : Rs. %.2f\n", gstAmount);
    printf("Final Price : Rs. %.2f\n", finalPrice);

}
