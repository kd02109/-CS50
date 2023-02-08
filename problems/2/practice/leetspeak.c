#include <stdio.h>
#include <cs50.h>
#include <string.h>

void compare(char c);

int main (int argc, string argv[])
{
    string word;
    int length;
    char a;

    if(argc == 1){
        printf("Usage: %s word", argv[0]);
    }

    if(argc > 1){
        word = argv[1];
        for(int i =0, n=strlen(word); i<n; i++)
        {
            compare(word[i]);
        }
    }
    printf("\n");

}


void compare(char c)
{
    if(c == 'a' || c == 'A')
    {
        printf("4");
    }
    else if(c == 'e' || c =='E')
    {
        printf("3");
    }
    else if(c == 'i' || c =='I')
    {
        printf("1");
    }
    else if(c == 'o' || c =='O')
    {
        printf("0");
    }
    else{
        printf("%c",c);
    }
}