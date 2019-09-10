#include<stdio.h>
int main()
{
	int i,j;
	int a[1024][1024];
	for(i=0;i<1024;i++)
	{
		for(j=0;j<1024;j++)
		{
			a[j][i]=i*j;	
		}
	}
	/*for(i=0;i<1024;i++)
	{
		for(j=0;j<1024;j++)
		{
			a[i][j]=i*j;	
		}
	}*/
	for(i=0;i<1024;i++)
	{
		for(j=0;j<1024;j++)
		{
			printf("%d\t",a[j][i]);	
		}
	}


}
