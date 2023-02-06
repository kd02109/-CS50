#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }while(n<1 || n>8);

    for(int x =0; x<n; x++)
    {
        for(int b=0; b<n-x-1; b++)
        {
            printf(" ");
        }
        for(int j=0; j<x+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}