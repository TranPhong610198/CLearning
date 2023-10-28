#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int i, j;

typedef struct number{
    int value;
    int fre;
} num;

int checkNum(int a){
    int temp;
    while (a>=10){
        temp = a%10;
        if ((a/10)%10 > temp) return 0;
        a = a/10;
    }
    return 1;
}

int searchArr(num arr[], int n, int x){
    for(i=0; i<n; i++){
        if(arr[i].value == x)
            return i;
    }
    return -1;
}

int main(){
    int x, n=0;
    num arr[100001];
    while((scanf("%d",&x))!=-1){
        if (checkNum(x)){
            int indx = searchArr(arr, n, x);
            if (indx != -1){
                arr[indx].fre ++;
            }
            else{
                arr[n].value = x;
                arr[n].fre = 1;
                n++;
            }
        }        
    }
    for (i=0; i<n; i++){
        printf("%d %d\n", arr[i].value, arr[i].fre);
    }
}