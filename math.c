
#include <stdio.h>
#include <math.h>

int main() {
    float x = 3.4;
    printf("x = %f\n", ceil(x));
    printf("x = %f\n", floor(x));
    printf("pow function = %f\n", pow(3, 4));
    printf("SQRT function = %f\n", sqrt(25.5));
    printf("LOG value = %f", log10(2));
    
    return 0;
}
/*
gcc math.c -o math -lm
./math

-lm flag tells the compiler to link against the math library (libm). 
This should resolve the undefined reference errors for ceil and floor.
C, functions like ceil, floor, pow, sqrt, and log10 are part of the math library,
 and you need to link against it explicitly
*/