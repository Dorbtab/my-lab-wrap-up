/*

สรุป lab04

ข้อที่ 1

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char str[10];
    int n = 0, ans = 0, t = 1, in = 0;

    fgets(str, 10, stdin);
    in = atoi(str);
    n = atoi(str);
    
    while (n != 0) {
        int tmp = n % 2;
        ans += tmp *t;
        t *= 10;
        n = n / 2;
    }
    printf("Binary number of %d is %04d.", in, ans);

    return 0;
}

----------------------------------------------------------------

ข้อที่ 2

#include <stdio.h>
#include <stdlib.h>

int is_prime(int num) {
    int c = 0;
    for (int i = 2; i<=num; i++){
        if (num % i == 0){
            c += 1;
            
        }if (c > 1){
            return 0;
        }
    }
    return 1;
}


int main() {
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i = 2; i <= n; i++) {
        if (is_prime(i)) {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}

----------------------------------------------------------------

ข้อที่ 3

#include <stdio.h>
#include <stdlib.h>

// Do the count by your function
// count target in n
int count_target(int n, int target)
{
    int f = 0, c = 0;
    while (n > 0){
        f = n % 10;
        if (f == target)
            c += 1;
        n /= 10;
    }
    return c;

}

int main() {
    char input_n[12], input_x[2];
    fgets(input_n, 12, stdin);
    fgets(input_x, 2, stdin);

    int n;
    int x, count;

    n = atoi(input_n);
    x = atoi(input_x);

    count = count_target(n, x);

    // Display output in separate cases
    //
    if (count <= 0) {
        printf("There is no \"%d\" in %d.\n", x, n);
    } else if (count == 1) {
        printf("There is only 1 \"%d\" in %d.\n", x, n);
    } else {
        printf("There are %d \"%d\"(s) in %d.\n", count, x, n);
    }
    return 0;
}

----------------------------------------------------------------

ข้อที่ 4

#include <stdio.h>
#include <stdlib.h>

void top_bot(int x){
    for (int i = 0; i < x; i++){
        printf("*");
    }
}

void middle(int x){
    printf("*");
    for (int i = 0; i < x-2; i++){
        printf(" ");
    }
    printf("*\n");
}

int main() {
    char input_x[5], input_y[5];
    fgets(input_x, 5, stdin);
    fgets(input_y, 5, stdin);

    int x, y;
    x = atoi(input_x);
    y = atoi(input_y);
    
    top_bot(x);
    printf("\n");
    int r = 1;
    for (int i = 0; i < y-2; i++){
        
        for (int j = 0; j < r; j++){
            printf(" ");
        }
        r++;
        middle(x);
        
    }
    for (int j = 0; j < r; j++){
            printf(" ");
    }
    top_bot(x);
    return 0;
}

----------------------------------------------------------------

ข้อที่ 5

#include <stdio.h>
#include <stdlib.h>

void rangoli_line(int n, int im){

    
    for (int i = 0; i < (im*2)-2; i++)
        printf("-");
    
    //alphabet
    int iml = n-1;
    while (iml >= im){
        printf("%c-", iml+97);
        iml--;
    }

    //------------------
    printf("%c", iml+97);
    //------------------

    //alphabet
    int imr = im;
    while (imr < n){
        printf("-%c", imr+97);
        imr++;
    }



    
    for (int i = 0; i < (im*2)-2; i++)
        printf("-");
    printf("\n");
}   

int main()
{   

    int n = 0;

    scanf("%d", &n);

    if (n <= 0 || n > 26){
        printf("-");
    }
    else{
        for (int i = n; i > 0; i--){
            rangoli_line(n, i);
        }
        for (int i = 2; i <= n; i++)
            rangoli_line(n, i);
        return 0;
    }
}

----------------------------------------------------------------

ข้อที่ 6

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10], str2[10];
    float goal = 0, collected = 0, total = 0;
    int c = 0;

    printf("Enter your goal amount: ");
    fgets(str1, 10, stdin);
    goal = atof(str1);
    while (1) {
        printf("Enter money collected today: ");
        fgets(str2, 10, stdin);
        collected = atof(str2);
        total += collected;
        goal = goal - collected;
        c += 1;
        if (goal <= 0)
            break;
        
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", c, total, goal);
    }
    if (c == 1)
        printf("Congratulations! You take %d day to reach your goal.\n", c);
    else
        printf("Congratulations! You take %d days to reach your goal.\n", c);

    return 0;
}

----------------------------------------------------------------

ข้อที่ 7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int h = 0;
    fgets(str, 10, stdin);
    h = atoi(str);
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = h-1; i > 0; i--){
        for (int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

----------------------------------------------------------------

ข้อที่ 8

#include <stdio.h>
#include <stdlib.h>

void find_binary(int n){
    if (n == 0){
        return;
    }

    find_binary(n / 2);
    printf("%d", n%2);
}

int main()
{
    char str[10];
    int n;

    fgets(str, 10, stdin);
    n = atoi(str);
    if (n == 0)
        printf("%d", 0);
    else
        find_binary(n);
    return 0;
}

*/

