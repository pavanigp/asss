#include<stdio.h>

int get(int val, int n, int p) 
{ 
    return (((1<<n)-1)&(val>>p)); 
} 
  
int main() 
{ 
	int val,n,p; 
	printf("Enter number & position & no.of bits to get:::\n");
	scanf("%d%d%d",&val,&n,&p);
	printf("The extracted number is %d\n",get(val,n,p));
	return 0; 
} 


/*

pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$gcc -Wall -Werror -o get get.c
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./get 
Enter number & position & no.of bits to get:::
506
5
1
The extracted number is 29
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./get 
Enter number & position & no.of bits to get:::
506
4
4
The extracted number is 15
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/n_from_pos$ ./get 
Enter number & position & no.of bits to get:::
506
7
1
The extracted number is 125
*/
