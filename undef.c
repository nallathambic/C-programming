#include<stdio.h>
#define AB 10
 int s = AB *100;
 #undef AB
int main()
{
    printf("s= %d\n",s);
}