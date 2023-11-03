/*(1 mark, file to be edited: Q6.c)
The program allows users to enter up to 100 characters from the keytmrd.
Find and print the sum of the values of numeric characters ((1-9) that are odd numbers.
Below is an example:
Enter s : "Fpt13 education6"*/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int i, j;

int main(){
    char str[101];
    int sum;
    scanf("%[^\n]",&str);
    getchar();
    for (i=0; str[i] != '\0'; i++){
        if (isdigit(str[i])){
            if((str[i]-48) % 2 == 1){
                sum += str[i]-48;
            }
        }
    }
    printf("%d", sum);    
}