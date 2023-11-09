#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int i, j;
void myFunc(int x)
{
    if (x > 0)
        myFunc(--x);
    printf("%d,", x);
}
int main()
{
    myFunc(5);
    return 0;
}