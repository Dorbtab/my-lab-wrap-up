/*

สรุป lab03

ข้อที่ 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[10];
    fgets(str, 10, stdin);

    int i = atoi(str);
    while (i >= 0){
        printf("%d\n", i);
        i--;
    }
    return 0;
}

----------------------------------------------------------------

ข้อที่ 2

#include <stdio.h>
#include <stdlib.h>


int gcd(int num1, int num2) {
    while (1) {
        if (num2 == 0) {
            return num1;
        }
        
        return gcd(num2, num1%num2);
    }
}

int lcm(int num1, int num2) {
    return (long long)num1*num2 / gcd(num1, num2);
}

int main() {
    char str1[30], str2[30];
    long long n1, n2;
    fgets(str1, 30, stdin);
    fgets(str2, 30, stdin);

    n1 = atoll(str1);
    n2 = atoll(str2);

    printf("GCD: %lld\n", gcd(n1, n2));
    printf("LCM: %lld\n", lcm(n1, n2));

    return 0;
}

----------------------------------------------------------------

ข้อที่ 3

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char stra[10], strb[10];
    int a, b, i;
    fgets(stra, 10, stdin);
    fgets(strb, 10, stdin);

    a = atoi(stra);
    b = atoi(strb);
    
    i = 2;
    while(1) {
        if (i > b || i > a){
            break;  
        }else if (a%i == 0 && b%i == 0) {
            a = a/i;
            b = b/i;
            i = 1;
        }
        i++;
        
    }

    if (b == 1) {
        printf("= %d", a);
    }else {
        printf("= %d/%d\n", a, b);
    }
    

    return 0;
}

----------------------------------------------------------------

ข้อที่ 4

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fibo(int n)
{
    
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return ( pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n) )/( pow(2, n) * sqrt(5));
    }

}

int main()
{
    char input_n[5];
    fgets(input_n, 5, stdin);
    int n, i;
    n = atoi(input_n);
    for (i = 0; i <= n; i++) {
        
        printf("F(%d) = %d\n", i, fibo(i));

    }
    return 0;
}

----------------------------------------------------------------

ข้อที่ 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char strN[5];
    int n;

    fgets(strN, 5, stdin);
    n = atoi(strN);
    
    if (n >= 1 && n <= 26) {
        for (int i = n-1; i > 0; i--){
            printf("%c-", i+97);
        }
        printf("%c", 97);
        for (int i = 1; i < n; i++){
            printf("-%c", i+97);
        }
    } else {
        printf("-");
    }
        
    
    return 0;
}

----------------------------------------------------------------

ข้อที่ 6

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char input_x[10], input_y[10];

    printf("Input x: ");
    gets(input_x);
    printf("Input y: ");
    gets(input_y);

    double x, y;
    char input_command;

    x = atof(input_x);
    y = atof(input_y);

    printf("x = %5.4f, y = %5.4f\n", x, y);
    printf("[a]:Add [s]:Subtract [m]:Multiply [d]:Divide [M]:modulo [^]: x^y\n");
    printf("Command? ");
    input_command = getchar();

    switch (input_command) {
        case 'a':
            printf("x + y = %5.4lf\n", x+y);
            break;
        case 's':
            printf("x - y = %5.4lf\n", x-y);
            break;
        case 'm':
            printf("x * y = %5.4lf\n", x*y);
            break;
        case 'd':
            printf("x / y = %5.4lf\n", x/y);
            break;
        case 'M':
            printf("x mod y = %5.4lf\n", fmod(x,y));
            break;
        case '^': 
            printf("x ^ y = %5.4lf\n", pow(x,y));
            break;
        default:
            printf("Unknown Command.\n");
            break;
        }
        return 0;

    }

*/