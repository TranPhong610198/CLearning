#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "ValidDates.cpp"

// Idea : input date month and year then check the month, I will use for loop
// to scan month and add num of dates in previous months to take the oder of date was input
int OderOfYear(int date, int month, int year ){
    int count =0;
    for(int i=1; i<month; i++ ){
        count = count + numDayinMonth(i, year);
    }
    count = count + date;
    return count;
}

int main(){
    int date, month, year;
    printf("Input Date Month Year : ");
    scanf("%d %d %d", &date, &month, &year);
    while(!checkValidDates(date, month, year)){
        printf("Invalid Date !!! Input Date Month Year Again: ");
        scanf("%d %d %d", &date, &month, &year);
    }
    printf("the oder of this date in year is : %d", OderOfYear(date, month, year) );
}