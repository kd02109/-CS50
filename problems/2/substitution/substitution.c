#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int chackVaild(int, string);
int main(int argc, string argv[])
{
    //유효성 체크
    int check = chackVaild(argc,argv[1]);
    if(check == 1){
        return 1;
    }

    // 암호문 제작 함수 작성
    string plaintext = get_string("plaintext:  ");
    string key = argv[1];
    int order = 0;
    int length = strlen(plaintext)+1;
    char cipher[length+1];
    for(int i=0; i<length; i++){
        if(islower(plaintext[i])){
            order = plaintext[i]-97;
            cipher[i] = key[order];
            if(isupper(cipher[i])){
                cipher[i] += 32;
            }
        }
        else if(isupper(plaintext[i])){
            order = plaintext[i]-65;
            cipher[i] = key[order];
            if(islower(cipher[i])){
                cipher[i] -= 32;
            }
        }else{
            cipher[i] = plaintext[i];
        }
    }
    cipher[length+1] = '\0';
        printf("ciphertext: %s\n",cipher);
}

int chackVaild(int num, string str){
    if(num < 2 || num >2 ){
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if(strlen(str)!=26){
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for(int i=0, n=strlen(str); i<n; i++){
        if(isalpha(str[i])==0){
            printf("Key must contain 26 characters.\n");
            return 1;
        }
    }
    return 0;
}