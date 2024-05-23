//function gets input and return values
#include<stdio.h>
int z;  //global variables
void mulitiplication(int x,int y)
{        //x&y are local variables
    z =x*y;
}
void addition (int x,int y)
{
    z = x+y;
}
int main()
{
    int a,b;
    printf("Enter the values: ");
    scanf("%d%d",&a,&b);
    mulitiplication(a,b);
    printf("multiplication results:  %d\n",z);
    addition(a,b);
    printf("addition results: %d\n",z);
}