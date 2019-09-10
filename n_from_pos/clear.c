#include<stdio.h>

unsigned int clear(int val, int n, int p) 
{ 
    return ((((1<<n)-1)&(val>>(p-1)))<<(p-1))^val; 
	//return ~(((((1<<n)-1)&(val>>(p-1)))<<(p-1)))&val; 
	
} 
  
int main() 
{ 
	unsigned int val,n,p; 
	printf("Enter number & position & no.of bits to get:::\n");
	scanf("%d%d%d",&val,&n,&p);
	printf("The extracted number is %d\n",clear(val,n,p));
	return 0; 
} 


/*

pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ gcc -Wall -Werror -o clear clear.c
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./clear
Enter number & position & no.of bits to get:::
108
2
3
The extracted number is 96
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./clear
Enter number & position & no.of bits to get:::
255
4
5
The extracted number is 15
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./clear
Enter number & position & no.of bits to get:::
127
3
5
The extracted number is 15
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./clear
Enter number & position & no.of bits to get:::
127
2
5
The extracted number is 79
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./clear
Enter number & position & no.of bits to get:::
127
4
2
The extracted number is 97

*/
