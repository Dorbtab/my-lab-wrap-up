/*

สรุป lab01

ข้อที่ 1

#include<stdio.h>
int main() {
    int computer_time = 785;
    
    int day, hour, minute;
    day = computer_time/(60*24);
    hour = computer_time%(60*24)/60;
    minute = computer_time%60;
    printf("It is %d days %d hours and %d minutes.", day, hour, minute);

    return 0;
}

----------------------------------------------------------------

ข้อที่ 2

#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

int main()
{
    float radius = 1.5;
    
float v;
v = (4.0/3)*PI*(radius*radius*radius);
printf("The volume of this sphere is %.2f", v);

    return 0;
}

----------------------------------------------------------------

ข้อที่ 3

#include<stdio.h>

int main(){
float preGrade = 1.75;
int preCredit = 21;
int credit = 18;
float requiredGrade = 2.00;
float mustDoGrade;

mustDoGrade = ( (requiredGrade*(preCredit+credit))-(preGrade*preCredit) )/credit;
printf("The GPA this semester should be %.2f", mustDoGrade);

    return 0;
}

----------------------------------------------------------------

ข้อที่ 4

printf("x\nxx\nxxx\n xx\n  x");
printf("printf(\"Hello, world\\n\");");

----------------------------------------------------------------

ข้อที่ 5

#include <stdio.h>

int main()
{
    int amount = ...;
    
    printf("1: %d\n", (((amount%50)%20)%5));
    printf("5: %d\n", ((amount%50)%20)/5);
    printf("20: %d\n", (amount%50)/20);
    printf("50: %d\n", amount/50);


    return 0;
}
*/


