#include<stdio.h>
int main()
{
    //charater array
    char c[10];
    int i;
    printf("Enter the 5 chars : \n");
    for(i=0;i<5;i++)
    scanf("%c",&c[i]);
    c[i]='\0';
    printf("given input is: %s",c);


}