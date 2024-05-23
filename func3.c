//function has no inputs but return a value
#include<stdio.h>
int addition()
{
    int x,y;
    printf("Enter two values : ");
    scanf("%d%d",&x,&y);
    return x+y;
}
int main()
{
    printf("add of two : %d\n",addition());
}