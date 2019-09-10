#include<stdio.h> 
#include<stdlib.h> 
   
struct node
{ 
    int val; 
    struct node *left, *right; 
}; 

typedef struct node sn;

sn *newNode(int item) 
{ 
	sn *temp=(sn *)malloc(sizeof(sn)); 
	temp->val=item; 
	temp->left=temp->right=NULL; 
	return temp; 
}
void bst_inorder(sn *root) 
{ 	
	
	if(root!=NULL) 
	{ 
		bst_inorder(root->left); 
		printf("%d\t",root->val); 
		bst_inorder(root->right); 
	} 
}
void bst_preorder(sn *root) 
{
	if(root!=NULL) 
	{ 
		printf("%d\t",root->val); 
		bst_preorder(root->left); 
		bst_preorder(root->right); 
	} 
}
void bst_postorder(sn *root) 
{
	if(root!=NULL) 
	{ 
		bst_postorder(root->left); 
		bst_postorder(root->right); 
		printf("%d\t", root->val); 
	} 
}
sn* add(sn* node, int val) 
{ 
	if(node==NULL) 
		return newNode(val); 
	if(val<node->val) 
		node->left=add(node->left,val); 
	else if(val>node->val) 
		node->right=add(node->right,val);    
		return node; 
} 

int main() 
{
sn *root = NULL;
int val,ch;
while(1)
{	printf("\n1.add\n2.display in inorder\n3.display in preorder\n4.display in postorder\n5 exit\n");
    	scanf("%d",&ch);
	switch(ch)
	{
	case 1: 
		printf("\nEnter element to add in tree:::\n");		
		scanf("%d",&val);
	    	root=add(root,val); 
		break;
	case 2: 
		printf("\n\nInorder of elements in tree::\n");
		bst_inorder(root); 
		break;
	case 3: 
		printf("\n\nPreorder of elements in tree::\n");
		bst_preorder(root); 
		break;
	case 4: 
		printf("\n\nPostorder of elements in tree::\n");
		bst_postorder(root); 
		break;
	case 5: 
		exit(0);
	default: 
		printf("Enter choice from given options:::\n");
		break;
}
}
    return 0; 
} 




/*



pavani@TSHYD-033:~/Desktop/Mr.Teja/datast$ gcc -Wall -Werror -o bst bst.c 
pavani@TSHYD-033:~/Desktop/Mr.Teja/datast$ ./bst 

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1 

Enter element to add in tree:::
50

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
45

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
2


Inorder of elements in tree::
45	50	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
3


Preorder of elements in tree::
50	45	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
4


Postorder of elements in tree::
45	50	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
56

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
2


Inorder of elements in tree::
45	50	56	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
3


Preorder of elements in tree::
50	45	56	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
4


Postorder of elements in tree::
45	56	50	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
12

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
2


Inorder of elements in tree::
12	45	50	56	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
3


Preorder of elements in tree::
50	45	12	56	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
4


Postorder of elements in tree::
12	45	56	50	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
78

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
2


Inorder of elements in tree::
12	45	50	56	78	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
3


Preorder of elements in tree::
50	45	12	56	78	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
4


Postorder of elements in tree::
12	45	78	56	50	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
78

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
2


Inorder of elements in tree::
12	45	50	56	78	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
3


Preorder of elements in tree::
50	45	12	56	78	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
4


Postorder of elements in tree::
12	45	78	56	50	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
100

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
2


Inorder of elements in tree::
12	45	50	56	78	100	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
3


Preorder of elements in tree::
50	45	12	56	78	100	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
4


Postorder of elements in tree::
12	45	100	78	56	50	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
33

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
2

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
3


Preorder of elements in tree::
50	45	12	2	33	56	78	100	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
10

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
2


Inorder of elements in tree::
2	10	12	33	45	50	56	78	100	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
3


Preorder of elements in tree::
50	45	12	2	10	33	56	78	100	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
4


Postorder of elements in tree::
10	2	33	12	45	100	78	56	50	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
1

Enter element to add in tree:::
9

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
2


Inorder of elements in tree::
2	9	10	12	33	45	50	56	78	100	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
3


Preorder of elements in tree::
50	45	12	2	10	9	33	56	78	100	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
4


Postorder of elements in tree::
9	10	2	33	12	45	100	78	56	50	
1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
6
Enter choice from given options:::

1.add
2.display in inorder
3.display in preorder
4.display in postorder
5 exit
5


*/
