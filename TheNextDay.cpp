#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "ValidDates.cpp"

void Thenextday(int &date,int &month,int &year){
   date ++;
   if(date > numDayinMonth(month, year)){
        date = 1;
        month++;
        if (month > 12){
            month = 1;
            year ++;
        }
   }
}

int main(){
    int date, month, year;
    printf("Input Date Month Year : ");
    scanf("%d %d %d", &date, &month, &year);
    while(!checkValidDates(date, month, year)){
        printf("Invalid Date !!! Input Date Month Year Again: ");
        scanf("%d %d %d", &date, &month, &year);
    }
    Thenextday(date, month, year);
    printf("The next day is : %d %d %d", date, month ,year);
    
    
}