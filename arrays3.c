#include<stdio.h>
int main()
{
    //static 2D  array
    int a[2][2]={{10,15},{20,25}};
    int r,c;
    printf("The 2D array values :\n ");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        printf("val[%d][%d]=%d\n",r,c,a[r][c]);
    }
}