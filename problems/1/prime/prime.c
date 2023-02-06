#include <stdio.h>
#include <cs50.h>

int prime(int);

int main(void){
    int min;
    int max;

    do{
        min = get_int("Write min number: ");
    }while(min<1);

    do{
        max = get_int("Write max number: ");
    }while(max<=min);

    for (int i = min; i<=max; i++){
        if(prime(i))
        {
            printf("%i\n",i);
        }
    }
}


int prime(int number)
{
    if(number <=1){
        return false;
    }

    if(number == 2 || number == 3){
        return true;
    }

    for(int i = 2; i < number; i++)
    {
        if(number%i ==0){
            return false;
        }
    }
    return true;
}