/*
Write a C program to input electricity unit and calculate the total electricity bill according to
the given condition:
Price   -> 6rs / unit
Tax     -> 10% of total gross price (10/100 = .10)
subsidy -> 5% of total gross price (5/100 = 0.05)
*/

//  gross = total price of unit (12x6 = 72rs)
// net = price after all taxes or subsidy.

#include <stdio.h>
int main()
{
    float unit, unit_price = 6, gross_price, net_price, taxes, subsidy;

    printf("Enter Total Consumed unit \t: ");
    scanf("%f", &unit); 
    printf("Price Per Unit \t\t\t: 6rs\n");

    gross_price = unit_price * unit;
    taxes = gross_price * .10;
    subsidy = gross_price * .05;
    net_price = gross_price - taxes + subsidy;

    printf("Gross Price \t\t= %.3f", gross_price);
    printf("\nTaxes \t\t\t= %.3f\t", taxes);
    printf("\nSubsidy \t\t= %.3f\t", subsidy);
    printf("\nTotal Payable Price \t= %.3f",net_price);
    return 0;
}