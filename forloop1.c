#include<stdio.h>
int main()
{
    int i=0, rows;
     printf("how many rows pyramid you wanna bulid? : ");
    scanf("%d",&rows);
    int spaces = rows-1;
    for(i=1;i<rows*2;i=i+2){
        for(int k=spaces;k>0;k=k-1){
            printf(" ");
        }
        spaces = spaces-1;
        for(int j=0;j<i;j=j+1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}