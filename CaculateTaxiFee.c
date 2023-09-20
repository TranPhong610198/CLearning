/*Viết hàm tính tiền đi taxi từ số km cho trước, biết:

Số km ≤ 1 giá 15000đ
1 < số km ≤ 5 giá 13500đ
Số km > 5 giá 11000đ
Nếu số km > 120 km sẽ được giảm 10% trên tổng số tiền.*/

#include<stdio.h>
float CTF(float km){
    float fee;
    if(km < 2)
        fee = km * 15000 ; 
    else if (km >1 && km <= 5)
        fee = 15000 + (km-1)*13500;
    else
        if (km > 120)  
            fee = (15000 + 4 * 13500 + (km-5) * 11000) * 0.9 ;
        else   
            fee = 15000 + 4 * 13500 + (km-5) * 11000 ;

    return fee;
} 
int main (){
    float S ;
    printf("How far did you go in km ? \n");
    scanf("%f", &S);
    printf("You need pay %.2fVND for driver" , CTF(S));
}      