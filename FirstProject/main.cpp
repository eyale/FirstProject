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
//    double a, b, x1 = 0.4, x2 = 2, dx = 0.2, y;
//
//    printf("Enter a = ");
//    scanf("%lf", &a);
//
//    printf("Enter b = ");
//    scanf("%lf", &b);
//
//    for ( ; x1 <= x2; x1 += dx ) {
//        if (x1 >= 1 && x1 <= 2) {
//            y = a * pow(a * x1, 2) * log(x1);
//            printf("x = %f\t y = %f\n", x1, y);
//        }
//        else if (x1 < 1) {
//            y = 1;
//            printf("x = %f\t y = %f\n", x1, y);
//        }
//        else if (x1 > 2) {
//            y = exp(a*x1) * cos(b*x1);
//            printf("x = %f\t y = %f\n", x1, y);
//        }
//    }
    
//Лабараторная 3
//    double a, x, n = 5;
//
//    printf("Enter a = ");
//    scanf("%lf", &a);
//
//    printf("Enter x = ");
//    scanf("%lf", &x);
//
//    for ( ; x <= n; x++ ) {
//        x+=a;
//        x*=x;
//        printf("x = %f\t a = %f\n", x, a);
//    }
//
    
    //Сходящийся ряд
    double x, eps, result, step, ch, zn, i;

    printf("Enter x = ");
    scanf("%lf", &x);
    printf("Enter epsilon = ");
    scanf("%lf", &eps);
    
    result = x;
    step = x;
    i = 2;
    ch = x;
    zn = 1;
    
    while (fabs(step) > eps) {
        ch = ch * x * x;
        zn = zn * (i * ( i + 1 ));
        step = ch / zn * (-1);
        result = result + step;
        i = i + 2;
    }
    
    printf("Result = %lf!\n", result);
    printf("SIN(x) = %lf!\n", sin(x));
    return 0;
}






