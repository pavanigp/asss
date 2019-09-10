#include<stdio.h>
int clear_n(int val,int n)
{
	int result;
	result=(~(1<<n))&val;
	return result;	
}
int main()
{
	int val,n,result;
	printf("Enter number & position:::");
	scanf("%d%d",&val,&n);
	result=clear_n(val,n);
	printf("%d\n",result);
}


/*
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ gcc -Wall -Werror -o clear_n clear_n.c 
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./clear_n 
Enter number & position:::55127
2
55123
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./clear_n 
Enter number & position:::55127
7
55127
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./clear_n 
Enter number & position:::55127
6
55063

*/
