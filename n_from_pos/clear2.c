#include<stdio.h>

int get(int val, int n, int p) 
{ 
    return ~(((((1<<n)-1)&(val>>(p-1)))<<(p-1)))&val; 
} 
  
int main() 
{ 
	int val,n,p; 
	printf("Enter number & position & no.of bits to get:::\n");
	scanf("%d%d%d",&val,&n,&p);
	printf("The new number is %d\n",get(val,n,p));
	return 0; 
} 
