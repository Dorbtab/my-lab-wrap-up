/*

สรุป lab02

ข้อที่ 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char hour_str[5], min_str[5];
    int hour, min;

    printf("Enter hour: ");
    fgets(hour_str, 5, stdin);

    printf("Enter minute: ");
    fgets(min_str, 5, stdin);

    hour = atoi(hour_str);
    min = atoi(min_str);

    printf("Time is %02d:%02d", hour, min);
    return 0;
}

----------------------------------------------------------------

ข้อที่ 2

#include <stdio.h>
#include <stdlib.h>


int main() 
{   
    char s[10];
    char p[10];
    fgets(s, 10, stdin);
    fgets(p, 10, stdin);
    int sticker = atoi(s);
    double price = atof(p);
    double discounted;
    int dispercent, remainst;

    if(sticker < 1){
        dispercent = 0;
        remainst = sticker;
        discounted = price;
    }
    if(sticker == 1){                           //1
        dispercent = 10;
        remainst = sticker-1;
        discounted = price*(100-dispercent)/100;
    }else if(sticker == 2){                     //2
        dispercent = 15;
        remainst = sticker-2;
        discounted = price*(100-dispercent)/100;
    }else if(sticker >= 3 && sticker < 6){      //3
        dispercent = 20;
        remainst = sticker-3;
        discounted = price*(100-dispercent)/100;
    }else if(sticker >= 6 && sticker < 9){      //6
        dispercent = 30;
        remainst = sticker-6;
        discounted = price*(100-dispercent)/100;
    }else if(sticker >= 9){                     //9
        dispercent = 40;
        remainst = sticker-9;
        discounted = price*(100-dispercent)/100;
    }

    printf("You get %d percents discount.\n", dispercent);
    printf("Total amount due is %.2f Baht.\n", discounted);
    printf("And you have %d stickers left.\n", remainst);
}

----------------------------------------------------------------

ข้อที่ 3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char level_str[4], year_str[4];
    int level, year;

    printf("school level of student: ");
    fgets(level_str, 4, stdin);

    printf("how many of learning: ");
    fgets(year_str, 4, stdin);

    level = atoi(level_str);
    year = atoi(year_str);

    if ((level >= 4 && year >= 1) || (year > 3)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}

----------------------------------------------------------------

ข้อที่ 4

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char salary[20];
    float s = 0.0;
    float tax = 0.0;

    fgets(salary, 20, stdin);
    s = atof(salary);

    if(s < 0){
        printf("Error: Salary must be greater or equal to 0");
    }else{
        if(s == -0 || s == 0){
            tax = 0;
        }else if(s < 300000.01){
            tax = s*(5.0/100);
        }else{
            tax = 15000.0 + ( (s-300000.0)*(10.0/100) );
        }
        printf("%.2f", tax);
    }
    return 0;
}

----------------------------------------------------------------

ข้อที่ 5

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B, C;
    char a[10], b[10], c[10];
    char typ[20];

    printf("Enter length of side A: ");
    fgets(a, 10, stdin);
    printf("Enter length of side B: ");
    fgets(b, 10, stdin);
    printf("Enter length of side C: ");
    fgets(c, 10, stdin);

    A = atoi(a);
    B = atoi(b);
    C = atoi(c);

    if( ((A<=0) || (B<=0) || (C<=0) ) || (A+B)<=C || (A+C)<=B || (B+C)<=A){
        printf("Triangle type is invalid.");
    }else if(A == B && B == C){
        printf("Triangle type is equilateral.");
    }else if(A == B || B == C || C == A){
        printf("Triangle type is isosceles.");
    }else{
        printf("Triangle type is scalene.");
    }

    return 0;
}

----------------------------------------------------------------

ข้อที่ 6

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    ch = getchar();
    
    if(ch >= 'A' && ch <= 'Z'){
        printf("Output: upper case");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("Output: lower case");
    }else if(ch >= '0' && ch <= '9'){
        printf("Output: digit");
    }else{
        printf("Output: others");
    }

    return 0;
}

----------------------------------------------------------------

ข้อที่ 7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x_str[5], y_str[5];

    printf("Enter the x coordinate: ");
    fgets(x_str, 5, stdin);
    printf("Enter the y coordinate: ");
    fgets(y_str, 5, stdin);

    int x = atoi(x_str);
    int y = atoi(y_str);

if(x == 0 && y == 0){
        printf("Center");
    }else if(x == 0 && y > 0){
        printf("North");   
    }else if(x == 0 && y < 0){
        printf("South");
    }else if(y == 0 && x > 0){
        printf("East");
    }else if(y == 0 && x < 0){
        printf("West");
    }else if(x > 0 && y > 0){
        printf("North-east");
    }else if(x > 0 && y < 0){
        printf("South-east");
    }else if(x < 0 && y > 0){
        printf("North-west");
    }else if(x < 0 && y < 0){
        printf("South-west");
    }

    return 0;
}

----------------------------------------------------------------

ข้อที่ 8

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double price, cost, extracost = 0.0;
    double area;
    int diameter;
    int fixedcost = 5, basecost = 2;
    int s, p, c, m;
    char size[10], Epep[10], Eces[10], Emsh[10];
    //input
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size, 10, stdin);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(Epep, 10, stdin);
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(Eces, 10, stdin);
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(Emsh, 10, stdin);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    //process
    s = atoi(size);
    p = atoi(Epep);
    c = atoi(Eces);
    m = atoi(Emsh);

    if(s == 1){
        diameter = 10;
    }else if(s == 2){
        diameter = 16;
    }else if(s == 3){
        diameter = 20;
    }

    area = M_PI * (diameter*diameter)/4.0;
    extracost = extracost + (p*0.5) + (c*0.25) + (m*0.3);
    cost = fixedcost + (basecost*area) + (extracost*area);
    price = 1.5 * cost;

    printf("Your order costs %.2lf baht.\n", price);
    printf("Thank you.");
    return 0;

}
*/