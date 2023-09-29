#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

bool CheckPrimeNum(int n){
        int check =1;
        if (n<2){
        // printf("%d is NOT a prime number.",n);
        return false;
    }

    else{
        for (int i=2; i<=n/2 ; i++){
            if (n%i == 0){
                check = 0;
                break;
            }
        }
        if (check==1){
        // printf("%d is a prime number.",n);    
        return true;
        }
        else 
        // printf("%d is NOT a prime number.", n);
        return false;
    }   
}

int main(){
    int n, check = 1;
    printf("Input positive number that you want to check : ");
    scanf("%d", &n);
    if(CheckPrimeNum(n))
        printf("%d is a prime number.", n);
    else
        printf("%d is NOT a primt number.", n);
}