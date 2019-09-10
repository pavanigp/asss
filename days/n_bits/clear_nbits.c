#include <stdio.h>
int clear_n_bits(int num,int n,int pos)
{
    int res,temp;    
    res=-1<<pos-1;
    temp=pos+n;
    res=~((-1<<temp-1)^res);
    res=res&num;
    return res;

}
int main()
{
    int  num,n,pos,result;
    printf("enter the number and enter the number of bits\n");
    scanf("%d%d",&num,&n);
    printf("enter the position\n");
    scanf("%d",&pos);
    result=clear_n_bits(num,n,pos);
    printf("the result is:%d",result);
    return 0;
}
