#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int CountByRecursion(int n){
    if (n<10)
        return 1;
    return 1 + CountByRecursion(n/10);
}

int CountByLoop(int n){
    int count = 0;
    while (n != 0){
        count ++;
        n = n/10;
    }
    return count;
}
int main(){
    int n;
    printf("Input Interger: ");
    scanf("%d",&n);
    printf("%d and %d", CountByRecursion(n), CountByLoop(n));
    return 0;
}