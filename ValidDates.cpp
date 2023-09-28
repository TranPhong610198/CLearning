#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Function to check leap year
bool checkLeapYear(int n ){
    if((n%4 == 0) && (n%100 != 0) )
        return true;        
    else 
        return false ;
}

// This is a main function, i will change it into a bool function to reused it in the next question .
// int main(){
//      int test = 1;
//     int year, month , date ;
//     printf("Input Date Month Year : ");
//     scanf("%d %d %d", &date, &month, &year);
//     if (month<0 || date<0 || year<0){
//         printf("Invalid Dates !!! Check your input.");
//     }
//     else{
//         switch (month)
//         {
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             if (date >31)
//                 printf("Invalid date !!!");
//             else
//                 printf("Valid date !!!");
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             if (date > 30)
//                 printf("Invalid date !!!");
//             else
//                 printf("Valid date !!!");
//             break;
        
//         case 2:
//             if(checkLeapYear(year)){
//                 if( date > 29)
//                     printf("Invalid date !!!");
//                 else
//                     printf("Valid date !!!");
//             }
//             else{
//                 if(date > 28)
//                     printf("Invalid date !!!");
//                 else
//                     printf("Valid date !!!");
//             }
//             break;
//         default:
//             printf("Invalid date !!!");
//             break;
//         }
//         // if (test == 0)
//         //     printf("Invalid date !!!");
//         // else
//         //     printf("Valid date !!!");
//     }
    
// }


bool checkValidDates(int date, int month , int year){
    // int test = 1;
    // int year, month , date ;
    // printf("Input Date Month Year : ");
    // scanf("%d %d %d", &date, &month, &year);
    if (month<1 || date<0 || year<0){
        // printf("Invalid Dates !!! Check your input.");
        return false;
    }
    else{
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (date >31)
                // printf("Invalid date !!!");
                return false;
            else
                // printf("Valid date !!!");
                return true;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (date > 30)
                // printf("Invalid date !!!");
                return false;
            else
                // printf("Valid date !!!");
                return true;
            break;
        
        case 2:
            if(checkLeapYear(year)){
                if( date > 29)
                    // printf("Invalid date !!!");
                    return false;
                else
                    // printf("Valid date !!!");
                    return true;
            }
            else{
                if(date > 28)
                    // printf("Invalid date !!!");
                    return false;
                else
                    // printf("Valid date !!!");
                    return true;
            }
            break;
        default:
            // printf("Invalid date !!!");
            return false;
            break;
        }
        // if (test == 0)
        //     printf("Invalid date !!!");
        // else
        //     printf("Valid date !!!");
    }
    
}