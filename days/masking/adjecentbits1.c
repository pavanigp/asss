#include<stdio.h>
int adjecent_bits(int num)
{
	int temp=0,i,odd=0,even=0;
	int result;
	for(i=0;i<32;i+=2)
	{
		temp=1<<i;
		odd=odd|temp;
	}
	even=~odd;
	result=(((even&num)>>1)|((odd&num)<<1));
	return result;
}

int main()
{
	int num,result;
	printf("enter the number:");
	scanf("%d",&num);
	result=adjecent_bits(num);
	printf("result is :%d",result);
}
