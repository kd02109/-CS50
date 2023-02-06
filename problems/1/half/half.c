#include <stdio.h>
#include <cs50.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill = get_float("Bill before tax and tip: ");
    float tax = get_float("Sale Tax Percent: ");
    int tip  = get_int("Tip Percent: ");
    printf("You will owe $%.2f each!\n", half(bill, tax, tip));

}

float half(float bill, float tax, int tip)
{
    float bill_after_tax = bill * ( tax / 100.0 ) + bill;
    float bill_after_tax_tip = bill_after_tax * ( tip / 100.0 ) + bill_after_tax;
    float split = bill_after_tax_tip / 2;
    return split;
}