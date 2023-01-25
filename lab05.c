/*

สรุป lab05

ข้อที่ 1

#include <stdio.h>
#include <stdlib.h>

int main() {
 
    long long n;
    long long n2, p = 1;
    printf("Input n = ");
    scanf("%lld", &n);
    n2 = n*n;
    while (1){
        p *= 10;
        if (p > n){
            break;
        }
    }
    printf("n^2 = %lld\n", n2);
    if (n2 % p == n){
        printf("Yes. %lld is automorphic number.", n);
    }else{
        printf("No. %lld is not automorphic number.", n);
    }

    return 0;
} 

----------------------------------------------------------------

ข้อที่ 2

#include <stdio.h>

int main() {
    
    int n = 0;
    int a = 3, b = 0, c = 0;
    int key = 0;
    scanf("%d", &n);

    for (a; a <= n; a++){
        if (key){
            break;
        }
        else if (a > n/2){
            printf("No triple found.");
            break;
        }
        for (b = a+1; b<=n; b++){
            c = n-(a+b);
            if (c*c == a*a + b*b){
                printf("(%d, %d, %d)", a, b, c);
                key = 1;
            }
        }
    }

    return 0;
}

----------------------------------------------------------------

ข้อที่ 3

#include <stdio.h>
#include <stdlib.h>


double calculator(double initial_v, char o, double in_v){
    double pre_v;
    if (o == '+')
        pre_v = initial_v + in_v;
    else if (o == '-')
        pre_v = initial_v - in_v;
    else if (o == '*')
        pre_v = initial_v * in_v;
    else if (o == '/')
        pre_v = initial_v / in_v;    
    return pre_v;

}


int main()
{
    double initial_v;
    double in_v;
    

    printf("Initial Value: ");
    scanf("%lf", &initial_v);
    double ans = initial_v;
    printf("\n");
    while(1){
        char op;
        printf("Operator: ");
        scanf(" %c", &op);
        if (op == '+' || op == '-' || op == '*' ||op == '/'){
            printf("Input Value: ");
            scanf("%lf", &in_v);
            ans = calculator(initial_v, op, in_v);
            printf("Present Value is %.4lf\n\n", ans);
            initial_v = ans;
        }else{
            printf("\nFinish Calculation. Final Value is %.4lf", ans);
            break;
        }
    }

    return 0;
}

----------------------------------------------------------------

ข้อที่ 4

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0, d = 3;
    double pi = 4.0;
    int sym = -1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++){
        pi += sym*(4.0/d);
        d += 2;
        sym *= -1;
    }
    printf("%.10lf", pi);
    return 0;
}

----------------------------------------------------------------

ข้อที่ 5

#include <stdio.h>
#include <stdlib.h>


void line(int j){
    for (int i = 0; i < j; i++){
        if (i%2 != 1)
            printf("-");
        else
            printf("x");
    }
    printf("\n");

}

int main()
{
    int n = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        line(i);
    for (int i = n-1; i > 0; i--)
        line(i);
    return 0;
}

----------------------------------------------------------------

ข้อที่ 6

#include <stdio.h>

int main()
{
    int i, a[5],b[5],c[10] ;
    printf("Enter array a: \n");
    for (i = 0; i < 5; i++){
        printf("Please enter an integer: ");

    scanf ("%d",&a[i]);
    c[i] = a[i];
    }
    printf("Enter array b: \n");
    for (i = 0; i < 5; i++){
        printf("Please enter an integer: ");

        scanf ("%d",&b[i]);
        c[i+5] = b[i];
    }

    printf ("Array c: ");
    for (i=0;i<10;i++)
        printf ("%d ",c[i]);

    printf ("\n");
    return 0;
}

----------------------------------------------------------------

ข้อที่ 7

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows or columns: ");
    scanf("%d",&n);
    int a[n][n];

    // Assign value to array a
    for(i = 0; i < n; i++) {
            for(j = i; j < i+n; j++){
                a[i][j-i] = j+1;
            }
        }


    // Print all values in array a
    for(
    i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
        printf("%2d ", a[i][j]);
        printf("\n");
    }
    return 0;
}

----------------------------------------------------------------

ข้อที่ 8

#include <stdio.h>


void stairs(int s, int c){
    int i = 0;
    
    while (i < s){
        if (i == s-(c+2)){
            printf("|-O-|\n|-^-|\n");
            i = i+1;
        } else{
            printf("|---|\n");
        }
        i++;
    }
}

int main() {

    int s = 0, n = 0;
    int i = 1;
    int count = 0;

    printf("Input number of stairs: ");
    scanf("%d", &s);
    printf("---- round %d ----\n", i);

    stairs(s, count);

    while (1) {
        i += 1;
        printf("Input step command: ");
        scanf("%d", &n);
        count = count+n;
        if (count >= s-2)
            count = s-2;
        if (count <= 0)
            count = 0;
        if (n == 0)
            break;
        printf("---- round %d ----\n", i);
        stairs(s, count);
    }

    return 0;
}

*/