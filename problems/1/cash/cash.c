#include <stdio.h>
#include <cs50.h>

int quaters(int);
int dimes(int);
int nickels(int);
int pennies(int);
int rest(int,int);

int main(void)
{
    int coin;
    do{
      coin = get_int("change owed: ");
    }while(coin<0);

    int remaind;
    int quater = quaters(coin);
    remaind = rest(coin,25);
    int dime = dimes(remaind);
    remaind = rest(remaind,10);
    int nickel = nickels(remaind);
    remaind = rest(remaind,5);
    int penni = pennies(remaind);

    int count = quater+dime+nickel+penni;
    printf("%i\n",count);
}


int quaters(int coin){
    if(coin<25){
        return 0;
    }
    int quater = coin/25;
    return quater;
}

int dimes(int coin){
    int dimes = coin/10;
    return dimes;
}

int nickels(int coin){
    int nickle = coin/5;
    return nickle;
}

int pennies(int coin){
    int pennie = coin/1;
    return pennie;
}

int rest(int coin, int remainder){
    int remain = coin % remainder;
    return remain;
}