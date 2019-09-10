#include<stdio.h>
int adjecent_2bits(int num)
{
	int res,temp1,temp2;
	temp1=0xcccccccc;
	temp2=0x33333333;
	res=(((num&temp1)>>2)|((num&temp2)<<2));
	return res;	
}
int main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=adjecent_2bits(num);
	printf("result is :%d",result);
}
