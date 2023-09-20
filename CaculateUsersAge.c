#include<stdio.h>
#include<time.h>

int main(){
    time_t now;
    struct tm *tm;

    now = time(NULL);
    tm = localtime(&now);
    int age;
    
    printf("Can I Know Your Year Of Birth ?\n");
    scanf("%d", &age);

    printf("You're %d years old", tm->tm_year + 1900 - age);

    getchar();
}