#include<stdio.h>
int main()
{
    int num;
    // printf("how many rows pyramid you wanna bulid? : ");
    printf("pyramid limit :");
    scanf("%d",&num);
    for(int i=num; i>=0; i--) {
       for (int j =1; j<=i; j++) {
              printf("%d ", j); // Add space after %d for better readability
        }
        printf("\n");
    }

}