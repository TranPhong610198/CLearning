#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int i, j, start, end;
int main(){
    back:system("cls");
    char str[100];
    char stringcat[100];
    char stringrevers[100];
    int test;
    char name[100], firstname[50], lastname[50];
    // input string
    printf("Input string: ");
    scanf("%[^\n]", &str);
    getchar();
    strcpy(name,str);
    printf("String entered is: %s\n", str);

    // Change firstname lastname
    int n = strlen(name);
    j=0;
    for(i=n-1; name[i]!=' '; i--){
        firstname[j] = name[i] ;
        j++;
    }
    strrev(firstname);
    for(j=0;j<i;j++){
        lastname[j] = name[j];
    }
    
    strcat(firstname," ");
    strcat(firstname, lastname);
    printf("Name in national is: %s\n",firstname);

    // cat string
    printf("Input string cat: ");
    scanf("%[^\n]", &stringcat);
    getchar();
    // starting catting
    strcat(str, " ")    ;
    strcat(str, stringcat);
    printf("String catted is: %s\n",str);

    // reverser string following input
    printf("Input string revers: ");
    scanf("%[^\n]", &stringrevers);
    getchar();    
    if(strstr(str, stringrevers) != NULL){
        j=0;
        for(i=0; end==0; i++){
            if(str[i] == stringrevers[0]){
                start = i;
                end = i + strlen(stringrevers);
            }
        }
        strrev(stringrevers);
        for (i=start; i<end; i++){
            str[i] = stringrevers[j];
            j++;
        }
    printf("String reversered is: %s\n", str);
    }
    else
        printf("String reverser is not belong to string!!!");

    printf("1 to Continue and 0 to Stop.");
    scanf("%d", &test);
    getchar();
    if (test) goto back;
    system("pause");
}