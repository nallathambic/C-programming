#include<stdio.h>
int main()
{
  char buf [10];
  //int x;
  float x;
  printf("Enter a value : ");
  scanf("%f",&x);
  sprintf(buf,"%f",x);
  printf("x value in string : %s",buf);

}