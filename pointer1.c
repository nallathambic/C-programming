#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr = &a;
    printf("data in ptr is %d\n",*ptr);
     printf("address of a: %p\n",&a);
      printf("address of using ptr : %p\n",ptr);
    *ptr = *ptr +20;
    printf("the value of a=%d\n",a);
    printf("address of a: %p\n",&a);
    printf("address of using ptr : %p\n",ptr);
    return 0;
}