#include<stdio.h>
int adjecent_nibble(int num)
{
	int res,temp1,temp2;
	temp1=0xF0F0F0F0;
	temp2=0x0F0F0F0F;
	res=(((num&temp1)>>4)|((num&temp2)<<4));
	return res;	
}
int main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=adjecent_nibble(num);
	printf("result is :%d",result);
}
