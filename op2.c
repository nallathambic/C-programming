/*bitwise &
bitwise |
bitwise xor ^
 a = 60 binary value => 111100
 b = 30 binary value => 011110
 bitwise AND a&B    => 011100 (28)
bitwise OR a|B      => 11111O (62)
 bitwise XOR a^B    => 100010 (34) 
 left shift op res a<<  =>
 right shift op res a>>  =>
 */
 #include<stdio.h>
 int main()
 {
    int a=60,b=30,c=4,f=4;
    printf("bitwise AND a&b = %d\n",a&b);
    printf("bitwise OR a|b = %d\n",a|b);
    printf("bitwise XOR a^b = %d\n",a^b);
    printf("left shift op res = %d\n",c<<2);
    printf("right  shift op res = %d\n",f>>1);
 }
