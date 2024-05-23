#include <stdio.h>

int main() {
    FILE *fp;
    // char ch;
    int i, n, m;
    char c[255], c1[255];
    
    fp = fopen("2multable.txt", "r");
    // printf("Enter your content: \n to stop enter Q : ");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    // while(1){
    //     scanf("%c",&ch);
    //     if(ch!= 'Q'){
    //         fputc(ch,fp);
    //     }else {
    //         break;
    //     }
    // }
    while (fscanf(fp, "%d %s %d %s %d", &i, c, &n, c1, &m)!=EOF) {
        printf("%d %s %d %s %d\n", i, c, n, c1, m);
        fclose(fp); 
    }
    
    
    
    return 0;
 }
