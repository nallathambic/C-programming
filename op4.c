/* logical operators :
 AND op : && ex : a&&b 
 OR op : ||   ex: a||b 
 NOT op : !  ex : a!b (a<b) */
 #include<stdio.h>
 int main()
 {
    int a=2,b=4;
    printf("a&&b = %d",a&&b);
    printf("a||b = %d",a||b);
    printf("!(a<b) = %d",!(a<b));
 }