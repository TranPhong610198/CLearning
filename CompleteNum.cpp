#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Definition of Complete number : Số hoàn hảo 
// (hay còn gọi là số hoàn chỉnh, số hoàn thiện hoặc số hoàn thành)
// Là một số nguyên dương mà tổng các ước nguyên dương thực sự của nó (các số nguyên dương bị nó chia hết ngoại trừ nó) bằng chính nó.

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

bool CheckCompleteNum(int n){
    int sum = 0;
    if(CheckPrimeNum(n))
        return false;
    else{
        for(int i=1; i<n; i++){
            if (n%i == 0)
                sum += i;
        }
        if(sum == n)
            return true;
        else
            return false;
    }
}

int main(){
    int n; 
    printf("Input number: ");
    scanf("%d", &n);
    if(CheckCompleteNum(n))
        printf("%d is a complete number.", n);
    else
        printf("%d is NOT a complete number.", n);
}