#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int UCLN(int a, int b){
    while (a!=b){
        if (a>b)
            a-=b;
        else
            b-=a;
    }
}

int main(){
    int a, b;
    printf("Input two numbers a and b: ");
    scanf("%d %d", &a, &b);
    printf("UCLN BCNN of a b is : %d and %d", UCLN(a,b) , (a*b)/UCLN(a,b));
}