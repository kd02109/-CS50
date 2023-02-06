#include <stdio.h>
#include <cs50.h>

int populationResult(int start, int end);

int main (void){
    int start;
    int end;
    do{
        start = get_int("Start size: ");
    }while(start<9);
    do{
        end = get_int("End size: ");
    }while(start>=end);
    int year = populationResult(start, end);
    printf("Year :%i\n",year);
}

int populationResult(int start, int end){
    int born;
    int die;
    int population;
    int year = 1;
    do{
        if(year==1){
            born = start/3;
            die = start/4;
            population=start+born-die;
        }
        if(population>=end){
            return year;
        }

        born = population/3;
        die = population/4;
        population = population+born-die;
        year++;
    }while(population<end);

    return year;
}