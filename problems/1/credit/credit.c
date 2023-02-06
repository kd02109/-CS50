#include <stdio.h>
#include <cs50.h>

long CARD_NUMBER;
int valid_check(long num);

int main(void)
{
    // 유효성 체크
    bool checksum;
    do{
        CARD_NUMBER=get_long("Card no: ");
    }while(CARD_NUMBER<0);

    checksum = valid_check(CARD_NUMBER);
    if(checksum == false){
        return 1;
    }

    // 길이 및 카드사 찾을 번호 구하기
    int length = 0;
    int single_digit = 0;
    int two_digit =0;

    while(CARD_NUMBER>0){
        // 제일 앞단의 수 구하기
        if (CARD_NUMBER<10){
            single_digit = CARD_NUMBER;
        }
        if(CARD_NUMBER<100 && CARD_NUMBER >10){
            two_digit =CARD_NUMBER;
        }
        CARD_NUMBER/= 10;
        length++;
    }
    printf("length: %i\n", length);
    printf("single_digit: %i\n", single_digit);
    printf("two_digit: %i\n", two_digit);

    // 조건에 맞추어 출력
    if ((two_digit == 34 || two_digit == 37) && length == 15)
    {
        printf("AMEX\n");
        return 0;
    }
    else if ((two_digit == 51 || two_digit == 52 || two_digit == 53 || two_digit == 54 || two_digit == 55) && length == 16)
    {
        printf("MASTERCARD\n");
        return 0;
    }
    else if (single_digit == 4 && (length == 13 || length == 16))
    {
        printf("VISA\n");
        return 0;
    }
    else{
        printf("INVALID\n");
    }

}


int valid_check(long num)
{
    int total =0;
    int buffer = 0;
    bool var = true;

    while(num>0){
        if(var==true){
            total += num % 10;
            num /=10;
            var = false;
        }else{
            buffer = (num % 10);
            buffer *=2;

            if(buffer>=10){
                total += buffer%10;
                total += buffer/10;
            }else{
                total += buffer;
            }
            var = true;
            num /=10;
        }
    }
    if(total%10 ==0){
        return true;
    }else{
        printf("INVALID\n");
        return false;
    }

}