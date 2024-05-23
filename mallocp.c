#include<stdio.h>
#include<stdlib.h>  //dynamic memory allocation
int main()
{
    int *p; //int p[50];
    int n,i;
    printf("Enter the no. of elemensts : ");
    scanf("%d",&n);
    p = (int *) malloc(n*sizeof(int));
    printf("Enter the values: ");
    for(i=0;i<n;i++)
          scanf("%d",&p[i]);
      //      printf("memory sizeof : %ld\n",sizeof(int));
    printf("values in array : \n");
    for(i=0;i<n;i++)
         printf("p[%d] = %d\n",i,p[i]);

}