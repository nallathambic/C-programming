#include <stdio.h>
int main()
{
    int a=1;
    do{
        printf("value: %d\n",a*10);
        a=a+1; 
    }
   while(a<=10);
}