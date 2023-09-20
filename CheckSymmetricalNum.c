#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int reverseNum(int n){
    int numReversed = 0;
    while (n>0)
    {
        numReversed= numReversed*10+ n%10;
        n = n/10;
    }
    return numReversed;
}

int main(){
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    if (reverseNum(n) == n)
        printf("n is Symmetrical Number.");
    else
        printf("n is not Symmetrical Number");
    return 0;
    system("pause");
}