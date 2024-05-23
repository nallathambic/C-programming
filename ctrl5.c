// nested if
#include<stdio.h>
int main()
{
int choice, a, b ;
printf("enter the choice :");
scanf("%d",&choice);
printf("enter two values a & b: ");
scanf("%d%d",&a ,&b);
if(choice<=5)
    {
        if(a<50 && b<50){
               printf("a & b is less than<50 ");
        }
        else {
            printf(" great >50\n");
        }
    }
    else if(choice<=10)
    {
        if(a<100 && b<100){
            printf("a & b is less than<100");
        }
          else {
            printf(" less <50\n");
        }
    }
    else{
        printf("no answer");
    }
}