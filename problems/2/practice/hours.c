#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    // 변수 설정
    float sum = 0.0;
    float average =0.0;
    char word;

    // 배열 길이 값 구하기
    int n = get_int("Number of weeks taking CS50: ");

    // 배열할당
    int hour[n];

    //배열 길이 구하기
    int length = sizeof(hour)/sizeof(int);

    // 배열 값 넣기
    for(int i = 0; i < length; i++ )
    {
        do{
            hour[i] = get_int("Week %i HW Hours: ", i);
        }
        while(hour[i]<0);
    }

    // 평균울 구할지 총합을 구할지 설정
    do{
        word = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }while(word !='T' && word !='A');


    // 총합 구하기
    for(int x = 0; x < length; x++ )
    {
        sum += (float)hour[x];
    }

    // 평균 구하기
    average = sum/(float)length;

    // 출력
    if(word == 'T')
    {
        printf("%.2f hours\n", sum);
    }

    if(word == 'A')
    {
        printf("%.2f hours\n", average);
    }

}