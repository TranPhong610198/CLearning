/*(I mark, file to be edited: Q8.c)
Your program allows the user to enter an integer array of 'n' elements from the keyboard.
The program prints the elements with unique values in descending order, between elements separated
by a space.
Enter n = 7; array = {5, 8, 9, 8, 2, 9, 9)*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int i, j;

int searchArray(int arr[], int x, int n){
    int z;
    for (z=0; z<n; z++){
        if (x == arr[z]) return 1;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    j=0;
    for(i=0; i<n; i++){
        if(!searchArray(arr2, arr1[i], n)){
            arr2[j] = arr1[i];
            j++;
        }
    }
    for (i=0; i<j; i++){
        printf("%d ", arr2[i]);
    }
    system("pause");
}