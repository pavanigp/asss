#include<stdio.h>
#include<string.h>
char rem[100];
int count=0;
char *radix_convert(int no, int radix )
{
int remainder,d;
while(no>0)
{
	remainder=no%radix;
	d=remainder+'0';
        if(d>'9')
        {
	d=d+7;
	}
	rem[count++]=d;
	no=no/radix;
	}
return rem;
}

int main()
{
	char *remainders;
	int decimal,base,i;
	printf("Entre a decimal number\n");
	scanf("%d",&decimal);
	printf("Enter a base to convert::\n");
	scanf("%d",&base);
	remainders=radix_convert(decimal,base);
	printf("After converting decimal %d to base %d\n",decimal,base);
	for(i=strlen(remainders)-1;i>=0;i--)
	printf("%c",remainders[i]);
	printf("\n");
	return 0;
}



/*
pavani@TSHYD-033:~/Desktop$ gcc radixCon.c 
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
2
After converting decimal 128 to base 2
10000000
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
3
After converting decimal 128 to base 3
11202 
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
4
After converting decimal 128 to base 4
2000
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
5
After converting decimal 128 to base 5
1003
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
7
After converting decimal 128 to base 7
242
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
8
After converting decimal 128 to base 8
200
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
9
After converting decimal 128 to base 9
152 
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
9
After converting decimal 128 to base 9
152
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
56
After converting decimal 128 to base 56
2G
pavani@TSHYD-033:~/Desktop$ gcc radixCon.c 
pavani@TSHYD-033:~/Desktop$ ./a.out 
Entre a decimal number
128
Enter a base to convert::
70
After converting decimal 128 to base 70
1q


*/
