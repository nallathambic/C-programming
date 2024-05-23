#include<stdio.h>
int main()
{
    //static initialization
    int a[5] = {10,1,2,35,6};
    int b[4] = {10,1,2,35};
    int i , j;
    printf("the values are : \n");
    for(i=0;i<5;i++)
    printf("value[%d] = %d\n",i,a[i]);
    for(j=0;j<4;j++)
    printf("value[%d] = %d\n",j,b[j]);
     a-b;
}