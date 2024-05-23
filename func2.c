#include<stdio.h>
//input but no return from fuction

void multi_table(int x) // function definition
{
    int i;
    for(i=1;i<=15;i++)
    {
        printf("%d x %d = %d\n",i,x,i *x);
    }        //'i' x  'x' =  results

}
int main()
{ 
    int n;
    printf("Enter a value for multiplication table : ");
    scanf("%d",&n);
    multi_table(n); //function call
}