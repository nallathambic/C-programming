#include<stdio.h>
void updatearr(int *p)
{
    int i;
    printf("starting add : %p\n",p);
    for(i=0;i<4;i++)
    {
        p[i] = p[i] * 5;
    }//*(p+i)= *(p+i) *5
}
int main()
{
    int a[]= {1,2,3,4,5};
    int i;
    printf("add of a = %p \n",a);
    updatearr(a);
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
}