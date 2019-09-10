#include<stdio.h>
int set_n(int val,int n)
{
	int result;
	result=(1<<n)|val;
	return result;	
}
int main()
{
	int val,n,result;
	printf("Enter number & n position:::");
	scanf("%d%d",&val,&n);
	result=set_n(val,n);
	printf("%d\n",result);
}


/*

pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./set_n 
Enter number & n position:::55127
3
55135

pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./set_n 
Enter number & n position:::32093
1
32095

pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./set_n 
Enter number & n position:::60331
2
60335

pavani@TSHYD-033:~/Desktop/Mr.Teja/day4/nth$ ./set_n 
Enter number & n position:::60331
12
64427

*/
