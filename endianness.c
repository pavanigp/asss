

#include <stdio.h>
 
int main(void)
{
 unsigned int value = 0x11223344;
 char *r = (char *) &value;
 int i;
 
 for(i=0; i<4; i++) {
 printf("Address of 0x%x = %p \n", r[i], &r[i]);
 }

if(*r==0x44)
printf("Little endian");

else 
printf("Big endian");
 return 0;
}



/*
pavani@TSHYD-033:~/Desktop$ gcc endianness.c 
pavani@TSHYD-033:~/Desktop$ ./a.out 
Address of 0x44 = 0x7ffc54e715d8 
Address of 0x33 = 0x7ffc54e715d9 
Address of 0x22 = 0x7ffc54e715da 
Address of 0x11 = 0x7ffc54e715db 
Little endian

*/
