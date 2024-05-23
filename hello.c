#include<stdio.h>
int main()
{
    int a = 10,b,c=30,f;
    float e = 1.23, d, g, h =10;
    char i = 'a', j='b';

    b = a / c;
    d = a - c * 2;
    f = e * h - 20 + 30.21;
    g = d * c - 3 +12.33;
    
    printf("value of b is %d\nvalue of f is %f\n", b, d);
    printf("value of d is %d\nvalue of g is %f\n", f, g);

}