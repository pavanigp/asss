#include <stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
    struct node *prev;
};

typedef struct node sn;

void display(sn **q)
{
	sn *temp;
	temp=*q;
	if(temp==NULL)
	printf("No elements to display\n");
	else
	{ 	printf("\nElements in linked list:::\n");
		while (temp->next!=NULL)
		{
			printf("%d\t",temp->val);
			temp=temp->next;
		}
		printf("%d\t",temp->val);		
	}

}


void addbeg(sn **q,int val)
{
	sn *temp,*n;
	temp=*q;
	if(temp==NULL)
	{
		temp= (sn *)malloc(sizeof(sn));
		temp->val=val;
		temp->prev=NULL;
		temp->next=NULL;
		*q=temp;	
	}
	else
	{
		n=(sn *)malloc(sizeof(sn));
		n->val=val;
		n->next=temp;
		n->prev=NULL;
		temp->prev=n;
		temp=n;
		*q=temp;		
	}
}


void addend(sn **q,int val)
{
	sn *temp,*n;
	temp=*q;
	if(temp==NULL)
	{
		temp= (sn *)malloc(sizeof(sn));
		temp->val=val;
		temp->prev=NULL;
		temp->next=NULL;
		*q=temp;	
	}
	else
	{
		while(temp->next !=NULL)
			temp=temp->next;
		n=(sn *)malloc(sizeof(sn));
		n->val=val;
		n->next=NULL;
		temp->next=n;
		n->prev=temp;		
	}
}



void addpos(sn **q, int pos, int val)
{
	sn *temp,*n;
	temp=*q;
	if(temp==NULL)
	{
		temp= (sn *)malloc(sizeof(sn));
		temp->val=val;
		temp->prev=NULL;
		temp->next=NULL;
		*q=temp;	
	}
	else
	{
		for(int i=1;i<pos-1;i++)
			temp=temp->next;
		n=(sn *)malloc(sizeof(sn));
		n->val=val;
		n->prev=temp;
		n->next=temp->next;
		temp->next=n;		
	}
}


void delbeg(sn **q)
{
	sn *temp;
	temp=*q;
	if(temp==NULL)
	{
		printf("\nNo elements to delete\n");	
	}
	else
	{
		*q=temp->next;
		 free(temp);
		 temp=*q;
		 temp->prev=NULL;		
	}
}




void delend(sn **q)
{
	sn *temp,*temp1;
	temp=*q;
	if(temp==NULL)
	{
		printf("\nNo elements to delete\n");	
	}
	else
	{		
	while(temp->next !=NULL)
			{
				temp1=temp;
				temp=temp->next;
			}
		 free(temp);
		 temp1->next=NULL;
		 temp=*q;
	}
}

void delpos(sn **q, int pos)
{
	sn *temp,*temp1;
	temp=*q;
	if(temp==NULL)
	printf("\nNo elements to display\n");
	else
	{ 
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp1=temp->next;
		temp->next=temp->next->next;
		temp->next->prev=temp;
		free(temp1);		
	}

}

void search(sn **q,int val)
{
	int count=0;
	sn *temp;
	temp=*q;
	while(temp!=NULL)
	{
		count++;
		if(temp->val==val)
			printf("\n%d found at position %d\n",val,count);
		
		temp=temp->next;
		
	}	
	//printf("\n%d not found\n",val);
}





int main()
{
int ch,val,pos;
sn *start=NULL;
 
while(1)
{
printf("\n\n1.display\n2.insertion at begin\n3.insertion at end\n4.insert at postion\n5.del at begin\n6.del at end\n7.del at position\n8.search\n9.exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:display(&start);
		break;
		
        case 2:
		printf("enter the val\n");
		scanf("%d",&val);
		addbeg(&start,val);
		break;
	case 3:
		printf("enter the val\n");
		scanf("%d",&val);
		addend(&start,val);
		break;
        case 4:
		printf("enter the val and position\n");
		scanf("%d %d",&val,&pos);	
		addpos(&start,pos,val);
		break;

		
        case 5:
		delbeg(&start);
		break;
	case 6:
		delend(&start);
		break;
	case 7:
		printf("enter the position\n");
		scanf("%d",&pos);	
		delpos(&start,pos);
		break;
	case 8:
		printf("Enter element to search:::");
		scanf("%d",&val);
		search(&start,val);
		break;
        case 9:
       		 exit(0);
       	default:
		printf("enter the number between 1-9\n");
		break;
        
    }
}
    return 0;
}


/*

pavani@TSHYD-033:~/Desktop/Mr.Teja/datast$ gcc -Wall -Werror -o dll dll.c 
pavani@TSHYD-033:~/Desktop/Mr.Teja/datast$ ./dll 


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1
No elements to display


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
2
enter the val
134


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
134	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
2
enter the val
156


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
156	134	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
3
enter the val
111


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
156	134	111	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
3
enter the val
112


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
156	134	111	112	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
4
enter the val and position
145
3


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
156	134	145	111	112	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
4
enter the val and position
1566
4


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
156	134	145	1566	111	112	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
5


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
134	145	1566	111	112	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
6


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
134	145	1566	111	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
3
enter the val
1566


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
134	145	1566	111	1566	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
3
enter the val
2423


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
134	145	1566	111	1566	2423	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
7
enter the position
4


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
134	145	1566	1566	2423	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
8
Enter element to search:::1566

1566 found at position 3

1566 found at position 4


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
6


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
1

Elements in linked list:::
134	145	1566	1566	

1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
8
Enter element to search:::1


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
8
Enter element to search:::145

145 found at position 2


1.display
2.insertion at begin
3.insertion at end
4.insert at postion
5.del at begin
6.del at end
7.del at position
8.search
9.exit
9


*/

