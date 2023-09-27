
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// This Function To Count Digits of Number
int CountByRecursion(int n){
    if (n<10)
        return 1;
    return 1 + CountByRecursion(n/10);
}

// This function to check Narcisstic Number  ex: Narcisstic Number has 3 digits: 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3).
int NarcissticNum(int n){
    int test = n; 
	int temp = 0;
    int j = CountByRecursion(n);
    while(n!=0){
        temp = temp + (pow((n%10) , j));
        n=n/10;
    }
//    return temp;
	if (temp == test)
		return 1;
	else 
		return 0;
}
int main(){
    int n;
    printf("Input Interger Number : ");
    scanf("%d", &n);
	if(NarcissticNum(n) == 1)
		printf("%d is a Narcisstic Number\n", n);
	else
		printf("%d isn't a Narcisstic Number\n", n); 
//    printf("%d",NarcissticNum(n));
    system("pause");
}