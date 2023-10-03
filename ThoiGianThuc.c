#include <stdio.h>
#include <time.h>

int main() {
    time_t now;
    struct tm *tm;

    // Lấy thời gian hiện tại
    now = time(NULL);

    // Chuyển đổi thời gian sang dạng lịch
    tm = localtime(&now);

    // In thời gian ra màn hình
    // printf("Thời gian hiện tại là: %d-%d-%d %d:%d:%d\n",
    //         tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour,
    //         tm->tm_min, tm->tm_sec);

     printf("Thời gian hiện tại là: %d\n", tm->tm_year + 1900); // Dấu "->" trong C có nghĩa là toán tử thành viên mũi tên.
                                                                // Toán tử này được sử dụng để truy cập các thành viên của 
                                                                // một cấu trúc hoặc lớp thông qua một con trỏ.


  return 0;
}
