#include<stdio.h>
int main()
{
    int rows;
     printf("how many rows pyramid you wanna bulid? : ");
    scanf("%d",&rows);
    int spaces = 0;
    for(int i=rows*2-1;i>=0;i=i-2){
        for(int k=0;k<spaces;k=k+1){
            printf(" ");
        }
        spaces = spaces+1;
        for(int j=0;j<i;j=j+1){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
