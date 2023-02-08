#include <stdio.h>
#include <cs50.h>
#include <string.h>

void check(string);

int main(void)
{
    string password = get_string("Enter your password: ");
    check(password);

}

void check(string password)
{
    char c;
    int lowerSum = 0;
    int upperSum = 0;
    int symbolSum = 0;
    int numberSum = 0;
    for(int i = 0, n = strlen(password); i<n; i++)
    {
        c = password[i];
        if(c >32 && c<43){
            numberSum +=1;
        }
        if(c >64 && c <91 ){
            upperSum +=1;
        }
        if(c >96 && c<123){
            lowerSum +=1;
        }
        else{
            symbolSum+=1;
        }
    }

    if(lowerSum>0 && upperSum>0 && numberSum>0 && symbolSum>0){
        printf("Your password is valid!\n");
    } else {

        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol!\n");
    }
}