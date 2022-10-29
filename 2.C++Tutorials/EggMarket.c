#include <stdio.h>
int main()
{
    float noOfEgg, dozen, discount, finalPrice;
    // converting no of eggs into dozen
    printf("Welcome to Egg Market\n");
    printf("Enter the number of eggs\n");
    scanf("%f", &noOfEgg);
    dozen = noOfEgg / 12;
    printf("The dozen of eggs are %f\n", dozen);
    int MRP = 7;
    // calculating final price which buyer has to pay to shopkepper
    if (dozen >= 2 && dozen <= 5)
    {
        discount = (MRP * noOfEgg * 2) / 100;
        finalPrice = (MRP * noOfEgg) - discount;
    }
    else if (dozen > 5 && dozen <= 10)
    {
        discount = (MRP * noOfEgg * 5) / 100;
        finalPrice = (MRP * noOfEgg) - discount;
    }
    else if (dozen > 10)
    {
        discount = (MRP * noOfEgg * 7) / 100;
        finalPrice = (MRP * noOfEgg) - discount;
    }
    else
    {
        finalPrice = (MRP * noOfEgg);
    }
    printf("Before discount which he has to pay is %f\n", MRP * noOfEgg);
    printf("The discount given is %f\n", discount);
    printf("The final price which he has to pay is %f\n", finalPrice);

    return 0;
}
