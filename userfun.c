#include<stdio.h>
int sqr(int x)
{
    int sq;
    sq = x * x;
    // return sq;
}
int main()
{
    int n;
    printf("enter the input : ");
    scanf("%d",&n);
    printf("square of %d  = %d \n",n,sqr(n));
    return 0;

    
}