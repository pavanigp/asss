#include<stdio.h>
int adjecent_bits(int num)
{
	int res,temp1,temp2;
	temp1=0xAAAAAAAA;
	temp2=0x55555555;
	res=(((num&temp1)>>1)|((num&temp2)<<1));
	return res;	
}
int main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=adjecent_bits(num);
	printf("result is :%d",result);
}
