#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value");
    scanf("%d",&a);
    if(a>0 && a<=10)
    {
            printf("a is with in 0 to 10");
    }
        else
        {
            printf("a is not within range 10");
        }
}