#include<stdio.h>
int main()
{
    int a=1;
    int range;
    printf("Enter number of time to exe :");
    scanf("%d",&range);
    while(a<=range)
    {
        printf("value: %d\n",a*10);
        a=a+1;
    }
    printf("I am from for loop\n");
    for ( a = 1; a <= range;a=a+1)
    {
     printf("value = %d\n",a*5);
    }
    
}