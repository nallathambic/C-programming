/*
if(condtion1){

}
else if(condtion2){

}
else {

}
*/
#include<stdio.h>
 int main()
 {
    int a, b;
    printf(" enter the number a : ");
    scanf("%d", &a);
    if(a>0)
    {
        printf("+ve");
    }
    else if(a<0)
    {
        printf("_ve");
    }
    printf("\nenter the number b : ");
    scanf("%d", &b);
    if(b<0)
    {
        printf("_ve");
    }
     else if(b>0)
    {
        printf("+ve");
    }
    else {
        printf(" he given zero");
    }
    return 0;
 }
 