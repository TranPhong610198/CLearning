#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i, j, sl[100], gia[100], d1[100], d2[100], m1[100], m2[100], y1[100], y2[100];
char namesp[100][100];

int main(){
    char findname[1000];
    int count = 0;
    FILE *f = fopen("read.txt", "rb");
    if (f == NULL)
    {
        printf("error !!!");
        exit(1);
    }
    while (fscanf(f, "%[^\t]\t%d\t%d\t%d/%d/%d\t%d/%d/%d", namesp[count], &sl[count], &gia[count], &d1[count], &m1[count], &y1[count], &d2[count], &m2[count], &y2[count]) != EOF)
    {
        printf("%s\t%d\t%d\t%d/%d/%d\t%d/%d/%d", namesp[count], sl[count], gia[count], d1[count], m1[count], y1[count], d2[count], m2[count], y2[count]);
        ++count;
    }
    printf("\npls enter the milk u want to find: ");
    gets(findname);
    int test = 0;
    for (i=0; i<count; i++){
        if(strstr(namesp[i],findname) != NULL){
            printf("%s", namesp[i]);
            test = 1;
           }
    }
    if (test == 0)
        printf("Not Found!!!");
    fclose(f);
    return 0;
}