#include <stdio.h>
int n_ones(int n,int pos)
{
    int res,temp;    
    res=-1<<pos-1;
    temp=pos+n;
    res=(-1<<temp-1)^res;
    return res;

}
int main()
{
    int  num,n,pos,result;
    printf("enter the number of bits\n");
    scanf("%d",&n);
    printf("enter the position\n");
    scanf("%d",&pos);
    result=n_ones(n,pos);
    printf("the result is:%d",result);
    return 0;
}

