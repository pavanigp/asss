#include<stdio.h>



int get_n(int val,int n)
{
	int result;
	result=((1<<n)&val);
	result=result>0?1:0;
	return result;	
}

/*
int get_n(int val,int n)
{
	int result;
	result=((val>>n)&1);
	return result;	
}
*/
int main()
{
	int val,n,result;
	printf("Enter number & n position::::");
	scanf("%d%d",&val,&n);
	result=get_n(val,n);
	printf("%d",result);
}

/*

pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ gcc -Wall -Werror -o get_n get_n.c pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./get_n 
Enter number & n position::::55127
4
1pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./get_n 
Enter number & n position::::55127
3
0pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./get_n 
Enter number & n position::::55127
7
0pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./get_n 
Enter number & n position::::55127
6

*/
