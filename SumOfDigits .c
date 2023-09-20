/*Tính tổng của các chữ số của một số nguyên.
Ví dụ:          Input:               1234
                Output:               10*/    
#include<stdio.h>
int main(){
    int num, sum = 0;
    printf("Input the number that you want to caculate sum of it's digits\n");
    scanf("%d", &num);
    while (num!= 0){
        sum = sum + num%10;
        num = num/10;
    }
    printf("Sum of Digits : %d\n", sum);
}                
