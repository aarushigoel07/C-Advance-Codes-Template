/*A program that creates a Linked List of 10 nodes. Split this linked list into 2 linked lists each with 5 nodes. Print all the 3 linked lists.*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int i;
	struct node *next;
};

int main()
{
	struct node *first,*second,*bkup,*l1,*l2;
	int n,j;
	first=malloc(sizeof(struct node));
	first->next=NULL;
	bkup=first;

	printf("Enter value for node 1 : ");
	scanf("%d",&n);
	first->i=n;

	for(j=2;j<=10;j++)
	{
		second=malloc(sizeof(struct node));
		first->next=second;
		first=second;
		first->next=NULL;
		printf("Enter value for node %d : ",j);
		scanf("%d",&n);
		first->i=n;
	}

	printf("\nLINKED LIST :-\n");
	first=bkup;
	for(j=0;j<10;j++)
	{
		printf("%d\n",first->i);
		first=first->next;
	}


	printf("\nLIST 1 :-\n");
	l1=bkup;
	for(j=0;j<5;j++)
	{
		printf("%d\n",l1->i);
		l1=l1->next;
	}

	printf("\nLIST 2 :-\n");
	l2=l1;
	for(j=0;j<5;j++)
	{
		printf("%d\n",l2->i);
		l2=l2->next;
	}

	return(0);
}

