#include<stdio.h>
int main()
{
    int a = 10;
    printf("a = %d\n",a);
    //block scope
    {
        int x=a;
        printf("x from inner block = %d\n",x);
    }
    // printf("x = %d\n",x);
    a=a+1;     //a=x+1;
    printf("a = %d\n",a);
}