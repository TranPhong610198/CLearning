#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Function to check n is prime number or not.
bool CheckPrimeNum(int n){
    int check =1;
    if (n<2)
        return false;
    else{
        for (int i=2; i<=n/2 ; i++){
            if (n%i == 0){
                check = 0;
                break;
           }
        }
        if (check==1)  
            return true;
        else 
            return false;
    }   
}
// Function to count divior of n.
int CountDivisor(int n){
    int count = 0;
    if(CheckPrimeNum(n))
        return 2;
    else{
        for(int i=1; i<=n; i++){
            if(n%i == 0)
                count++;
        }
        return count;
    }
}

int main(){
    int n;
    printf("Input integer that you want to count it's devisor : ");
    scanf("%d", &n);
    printf("The number of %d's devisor is : %d",n , CountDivisor(n));
}