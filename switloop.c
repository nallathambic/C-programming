#include<stdio.h> 
#include<stdlib.h>
int main()
{
    int x,y;
    int choice;
    while (1){
    printf("\n 1=>add\n 2=>subtra\n 3.exit\n");
    printf("enter your choice(+ or -): ");
    scanf("%d",&choice);
    if(choice<3)
    {
         printf("enter values for x & y:");
         scanf("%d%d",&x,&y);
    }
    switch(choice)
    {
    case 1:
       printf("Add x & y =%d\n",x+y);
        break;
    case 2:
        printf("diff x & y  %d\n",x-y);
        break;
    case 3:
         exit(1);
    default:
          printf("Error: choice can be + or-\n");
        break;

    }
    }
}