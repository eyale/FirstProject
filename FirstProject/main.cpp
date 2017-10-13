#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
//    Лабараторная 1
//    double a, b, c, t, x, y;
//    printf("Enter a=");
//    scanf("%lf", &a);
//
//    printf("Enter b=");
//    scanf("%lf", &b);
//
//    printf("Enter c=");
//    scanf("%lf", &c);
//
//    printf("Enter t=");
//    scanf("%lf", &t);
//
//    printf("Your result x=%f\n", x = exp(-a*b) + cos(b));
//    printf("Your result y=%f\n", y = b * cos(t * sqrt(c) + b));
    
//    Лабараторная 2
    double a, b, x1 = 0.4, x2 = 2, dx = 0.2, y;
    
    printf("Enter a = ");
    scanf("%lf", &a);

    printf("Enter b = ");
    scanf("%lf", &b);
    
    for ( ; x1 <= x2; x1 += dx ) {
        if (x1 >= 1 && x1 <= 2) {
            y = a * pow(a * x1, 2) * log(x1);
            printf("x = %f\t y = %f\n", x1, y);
        }
        else if (x1 < 1) {
            y = 1;
            printf("x = %f\t y = %f\n", x1, y);
        }
        else if (x1 > 2) {
            y = exp(a*x1) * cos(b*x1);
            printf("x = %f\t y = %f\n", x1, y);
        }
    }
}
