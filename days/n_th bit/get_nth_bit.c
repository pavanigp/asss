#include<stdio.h>
int get_nth_bit(int num,int pos)
{
	int res;
	res=num&(1<<pos);
	res=res>0?1:0;
	return res;	
}
int main()
{
	int num,n,result;
	printf("enter the number and positions");
	scanf("%d%d",&num,&n);
	result=get_nth_bit(num,n);
	printf("%x",result);
}
