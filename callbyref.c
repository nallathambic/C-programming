#include<stdio.h>
void modify(int *x)
{
    *x = *x * 10;
    printf("address in x : %p\n",x);
}
int main()
{
    int a=5;
    modify(&a);
    printf("\n address of a : %p\n",&a);
    printf("\na= %d",a);
}