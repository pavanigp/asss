#include<stdio.h>
int adjecent_byte(int num)
{
	int res,temp1,temp2;
	temp1=0xFF00FF00;
	temp2=0x00FF00FF;
	res=(((num&temp1)>>8)|((num&temp2)<<8));
	return res;	
}
int main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=adjecent_byte(num);
	printf("result is :%d",result);
}
