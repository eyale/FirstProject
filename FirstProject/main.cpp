#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    double a, b, c, t, x, y;
    printf("Enter a=");
    scanf("%lf", &a);
    
    printf("Enter b=");
    scanf("%lf", &b);
    
    printf("Enter c=");
    scanf("%lf", &c);
    
    printf("Enter t=");
    scanf("%lf", &t);
    
    printf("Your result x=%f\n", x = exp(-a*b) + cos(b));
    printf("Your result y=%f\n", y = b * cos(t * sqrt(c) + b));
}
