#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }while(n<1 || n>8);

    for(int i=0; i<n; i++){
        for(int b_l=0; b_l<n-i-1; b_l++)
        {
            printf(" ");
        }
        for(int p_l=0; p_l<i+1; p_l++)
        {
            printf("#");
        }
        printf(" ");
        for(int p_r=0; p_r<i+1; p_r++)
        {
            printf("#");
        }
        printf("\n");
    }

}
