#include<stdio.h>
int toggle_n(int val,int n)
{
	int result;
	result=(1<<n)^val;
	return result;	
}
int main()
{
	int val,n,result;
	printf("Enter number and position::::");
	scanf("%d%d",&val,&n);
	result=toggle_n(val,n);
	printf("%d\n",result);
}


/*
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ gcc -Wall -Werror -o toggle_n toggle_n.c 
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./toggle_n 
Enter number and position::::55127
3
55135pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./toggle_n 
Enter number and position::::55127
1
55125
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./toggle_n 
Enter number and position::::55127
0
55126
pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./toggle_n 
Enter number and position::::55127
13
63319

*/
