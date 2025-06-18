#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    //Operators
    // 1.
    // int a,b,c,d;
    // printf("Maximum of 4 numbers \n");
    // printf("Enter four numbers (a-b-c-d) : ");
    // scanf("%d-%d-%d-%d,",&a,&b,&c,&d);
    // a>b & a>c & a>d ? printf("Maximum : %d",a) : b>a & b>c & b>d ? printf("Maximum : %d",b) : 
    // c>a & c>b & c>d ? printf("Maximum : %d",c) : printf("Maximum : %d",d);
    
    //2.
    // int a;
    // printf("Positive/Negative/Zero \n");
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // a>0 ? printf("Positive") : a<0 ? printf("Negative") : printf("Zero");
    
    //3.
    // char a;
    // printf("Alphabet or Not \n");
    // printf("Enter a character : ");
    // scanf("%c",&a);
    // if(isalpha(a)){
    //     printf("Alphabet");
    // }
    // else{
    //     printf("Not a Alphabet");
    // }
    
    //4.
    // int a,b;
    // printf("Exchange values with a third Variable \n");
    // printf("Enter two numbers (a,b): ");
    // scanf("%d,%d",&a,&b);
    // printf("a = %d,b = %d \n",a,b);
    // int temp = a;
    // a = b;
    // b = temp;
    // printf("a = %d,b = %d",a,b);
    
    //5.
    // int a,b;
    // printf("Exchange values without a third Variable \n");
    // printf("Enter two numbers (a,b): ");
    // scanf("%d,%d",&a,&b);
    // printf("a = %d,b = %d \n",a,b);
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("a = %d,b = %d",a,b);
    
    //6.
    // int a;
    // printf("Check whether the number is odd or even \n");
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // a%2==0 ? printf("Even") : printf("Odd");
    
    //Conditional Statement
    //1.
    // int a;
    // printf("Check whether the number is odd or even \n");
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // if(a%2==0){
    //     printf("Even");
    // }
    // else {
    //     printf("Odd");
    // }
    
    //2.
    // int a,b,c,d;
    // printf("Maximum of four numbers \n");
    // printf("Enter four numbers (a,b,c,d) : ");
    // scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    // if(a>b & a>c & a>d){
    //     printf("Maximum : %d",a);
    // }
    // else if (b>a & b>c & b>d){
    //     printf("Maximum : %d",b);
    // }
    // else if (c>a & c>b & c>d){
    //     printf("Maximum : %d",c);
    // }
    // else {
    //     printf("Maximum : %d",d);
    // }
    
    //3.
    // char a;
    // printf("Find whether alphabet,number or special character \n");
    // printf("Enter the character : ");
    // scanf("%c",&a);
    // if(a >= 'a' & a <= 'z' || a >= 'A' & a <= 'Z' ){
    //     printf("Alphabet");
    // }
    // else if (a >= '0' & a <= '9'){
    //     printf("Number");
    // }
    // else {
    //     printf("Special character");
    // }
    
    //4.
    // int a;
    // printf("Check Leap year or not \n");
    // printf("Enter the Year : ");
    // scanf("%d",&a);
    // if((a%4 == 0 & a%100 != 0) || (a%400 == 0)){
    //     printf("Leap Year");
    // }
    // else {
    //     printf("Not a Leap Year");
    // }
    
    //5.
    // int a;
    // printf("Map numbers(1-7) to week names \n");
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // if(a == 1){
    //     printf("Monday");
    // }
    // else if(a == 2){
    //     printf("Tuesday");
    // }
    // else if(a == 3){
    //     printf("Wednesday");
    // }
    // else if(a == 4){
    //     printf("Thursday");
    // }
    // else if(a == 5){
    //     printf("Friday");
    // }
    // else if(a == 6){
    //     printf("Saturday");
    // }
    // else if(a == 7){
    //     printf("Sunday");
    // }
    
    //6.
    // int a,b,c;
    // printf("Check if three sides form a triangle \n");
    // printf("Enter the three sides (a,b,c) : ");
    // scanf("%d,%d,%d",&a,&b,&c);
    // if(a+b > c & b+c > a & c+a > b){
    //     printf("Triangle is possible");}
    // else if (a = b = c) {
    //     printf("Equalateral triangle");
    // }
    // else {
    //     printf("Triangle is not possible");
    // }
    
    //7.
    // bool leapyear(int year){
    //     return(year%4 == 0 && year%100 != 0) || (year%400 == 0);
    // }
    
    // int sub(){
    //     int day,month,year;
    //     printf("Check whether the date is valid or not \n");
    //     printf("Enter a date : ");
    //     scanf("%d/%d/%d",&day,&month,&year);
    //     bool validate = true;
        
    //     if (year < 1){
    //         validate = false;
    //     }
        
    //     if (month < 1 || month > 12){
    //         validate = false;
    //     }
        
    //     if(validate){
    //         int daysInMonth;
            
    //         switch (month) {
    //             case 1:
    //             case 3:
    //             case 5:
    //             case 7:
    //             case 8:
    //             case 10:
    //             case 12:
    //             daysInMonth = 31;
    //             break;
    //             case 4:
    //             case 6:
    //             case 9:
    //             case 11:
    //             daysInMonth = 30;
    //             break;
    //             case 2:
    //             if (leapyear(year)){
    //                 daysInMonth = 29;
    //             }
    //             else {
    //                 daysInMonth = 28;
    //             }
    //         }
    //         if (day < 1 || day > daysInMonth){
    //         validate = false;
    //         }
    //     if(validate){
    //         printf("Valid date");
    //     }
    //     else {
    //         printf("Invalid date");
    //     }
    //     return 0;
    //     }
        
    // }
    // sub();
    
    //8.
    int hour, minute;
    char colon;
    if (scanf("%2d%c%2d", &hour, &colon, &minute) == 3 && colon == ':') {
        if (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59) {
            printf("Valid Time\n");
        } else {
            printf("Invalid Time\n");
        }
    } else {
        printf("Invalid Time\n");
    }
    
    
    
    
    
    

    return 0;
}