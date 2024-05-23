#include<stdio.h>
int main()
{
    //dynamic initialization
    int x[50],i,max;
    printf("Enter the max no.of values to instert : \n");
    scanf("%d",&max);
    for(i=0;i<max;i++)
       scanf("%d",&x[i]);
    printf("The given values are : \n");
    for(i=0;i<max;i++)
    printf("%d\t",x[i]);
}