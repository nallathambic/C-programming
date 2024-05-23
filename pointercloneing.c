#include<stdio.h>
#include<unistd.h>
int main()
{
    int i = 10;
     int *j = &i;  //a pointer is a varibale that holds a data which is an address of another variable
  
    printf("[*] value of i :     %d \n",i);
    printf("[*] address of i :   %p \n",&i);//address of the referred variable
    printf("[*]value of j :      %p \n",j);//address of the referred variable
    printf("[*] address of *j :  %d \n",*j); //value of the referred variable
    printf("[*] address of j:    %p \n",&j);//address of the pointer variable
  
   i = 20;

   printf("[*] value of i :     %d \n",i);
    printf("[*] address of i :   %p \n",&i);
    printf("[*]value of j :      %p \n",j);
    printf("[*] address of *j :  %d \n",*j);
    printf("[*] address of j:    %p \n",&j);

  *j = 30;

    printf("[*] value of i :     %d \n",i);
    printf("[*] address of i :   %p \n",&i);
    printf("[*]value of j :      %p \n",j);
    printf("[*] address of *j :  %d \n",*j);
    printf("[*] address of j:    %p \n",&j); //cloning

    //next values change hack
   if(1){
      static int  j = 15;

    printf("[*] value of i :     %d \n",i);
    printf("[*] address of i :   %p \n",&i);
    printf("[*]value of j :      %p \n",j);
    printf("[*] address of *j :  %d \n",*j);
    printf("[*] address of j:    %p \n",&j);
   
   int *m = &j + 0x1; //illegal access, refers static var @ foo
        printf("[main:if] Address of m is: %p\n", m); //%p - pointers
        *m = 40;
   } 
 }

