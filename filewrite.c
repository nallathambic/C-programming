#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int i ;
    fp = fopen("input.txt","w");
    char ch[30];
    printf("Enter the string: ");
     scanf("%[^\n]",ch);
    fputs(ch,fp);
   fclose(fp);


}