#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int FactorialByRecursion (int n){
    if (n==1){
        return 1;
    }
    else{
        return n * FactorialByRecursion(n-1);
    }
} 

int FactorialByLoop (int n){
    int factorial = 1;
    for (int i=1 ; i<=n ; i++){
        factorial = factorial * i ;
    }
    return factorial;
}

int main(){
    int n;
    printf("Input Interger: \n");
    scanf("%d", &n);
    // printf("Factorial of %d : %d\n", n, FactorialByLoop(n));
    printf("Factorial of %d : %d\n", n, FactorialByRecursion(n));
    
    return 0;
}