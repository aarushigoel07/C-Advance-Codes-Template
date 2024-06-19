/*A program that creates a Linked List of 8 nodes. Print the node values in reverse order.*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int i;
	struct node *next;
};

int main()
{
	struct node *first,*second,*bkup;
	int n,j,k;
	first=malloc(sizeof(struct node));
	first->next=NULL;
	bkup=first;

	printf("Enter value for node 1 : ");
	scanf("%d",&n);
	first->i=n;

	for(j=2;j<=8;j++)
	{
		second=malloc(sizeof(struct node));
		first->next=second;
		first=second;
		first->next=NULL;
		printf("Enter value for node %d : ",j);
                scanf("%d",&n);
                first->i=n;
	}

	printf("\nPrinting linked list in reverse order :-\n");

	for(j=8;j>0;j--)
	{
		first=bkup;
		for(k=1;k<j;k++)
		{
			first=first->next;
		}
		printf("Value at node %d = %d\n",j,first->i);
		
	}

	return(0);
}


