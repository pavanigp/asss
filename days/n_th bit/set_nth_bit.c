#include<stdio.h>
int set_nth_bit(int num,int pos)
{
	int res;
	res=num|(1<<pos);
	return res;	
}
int main()
{
	int num,n,result;
	printf("enter the number and positions");
	scanf("%d%d",&num,&n);
	result=set_nth_bit(num,n);
	printf("%d",result);
}
