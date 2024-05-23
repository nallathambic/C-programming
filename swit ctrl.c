#include<stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("enter your choice:");
    scanf("%c",&choice);
    printf("enter values for a & b:");
    scanf("%d %d",&a,&b);
    switch(choice)
    {
    case 'a':
       printf( "Add a & b = %d",a+b);
        break;
    case 'b':
    printf( "diff a & b = %d",a-b);
        break;
    default:
    printf("Error: choice can be a or b");
        break;
    }
}