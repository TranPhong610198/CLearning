#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

bool checkLeapYear(int n ){
    if((n%4 == 0) && (n%100 != 0) )
        return true;        
    else 
        return false ;
}

void printLeapYear(int start, int end){
    for (int i=start; i <= end; i++){
        if (checkLeapYear(i))
            printf("%d ", i );
    }
    printf ("\n");
}

int main(){
    int  sYear, eYear;
    printf("Input : \n");
    printf("Start year : "); scanf("%d", &sYear);
    printf("End year : "); scanf("%d", &eYear);
    printf("Output : \n");
    printLeapYear (sYear, eYear);

}