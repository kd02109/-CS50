#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string str = get_string("Message: ");
    for(int i =0, n = strlen(str); i<n; i++)
    {
        int decimal = str[i];
        int binary[] = {0,0,0,0,0,0,0,0};
        int count = 0;
        while(decimal>0){
            binary[count] = decimal%2;
            count++;
            decimal /=2;
        }
        for(int j = BITS_IN_BYTE-1; j>=0; j--){
            print_bulb(binary[j]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
