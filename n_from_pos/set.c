#include<stdio.h>

int get(int val, int n, int p) 
{ 
    return ((((1<<n)-1)|(val>>p))<<p)|val; 
} 
  
int main() 
{ 
	int val,n,p; 
	printf("Enter number & position & no.of bits to get:::\n");
	scanf("%d%d%d",&val,&n,&p);
	printf("The new number is %d\n",get(val,n,p));
	return 0; 
} 

/*

pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ gcc -Wall -Werror -o set set.c
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./set 
Enter number & position & no.of bits to get:::
200
2
3
The new number is 216
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./set 
Enter number & position & no.of bits to get:::
2047
2
10
The new number is 4095
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./set 
Enter number & position & no.of bits to get:::
100
1
3
The new number is 108


*/
