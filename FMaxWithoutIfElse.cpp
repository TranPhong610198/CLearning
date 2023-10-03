#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Fmax(int a, int b){
    return (((a+b)+ abs(a-b))/2);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Max in a and b : %d", Fmax(a,b));
}