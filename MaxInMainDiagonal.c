/*(1 mark, file to ecnted: Q7.c)
The program allows the user to enter the values of the elements of the square matrix as integers with
the same Of rows and columns and input from the
Print the element on the main diagonal with the maximum value.*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int i, j;
int main(){
    int n, max;
    scanf("%d", &n);
    int matrix[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<n; i++){
        max = fmax(max, matrix[i][i]);
    }

    printf("%d", max);
}