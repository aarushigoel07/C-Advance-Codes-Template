/*A program that has two linked lists of 3 nodes each. Every node has one int value. Print both the linked lists. Now concat the lists (add second to end of first), creating a new Linked list with 6 nodes. Traverse this new list and print the value at each node.*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int i;
	struct node *next;
};

int main()
{
	struct node *first,*second,*bkup1,*bkup2;
	int ch,j,k;
	
	printf("TAKING VALUES FOR LIST 1 :-\n");
	first=malloc(sizeof(struct node));
	first->next=NULL;
	bkup1=first;

	for(j=1;j<=3;j++)
	{
		printf("Enter value for node %d of list 1 : ",j);
		scanf("%d",&ch);
		first->i=ch;
		second=malloc(sizeof(struct node));
		first->next=second;
		first=second;
		first->next=NULL;
	}

	printf("TAKING VALUES FOR LIST 2 :-\n");
        first=malloc(sizeof(struct node));
        first->next=NULL;
        bkup2=first;
        
        for(j=1;j<=3;j++)
        {
                printf("Enter value for node %d of list 2 : ",j);
                scanf("%d",&ch);
                first->i=ch;
                second=malloc(sizeof(struct node));
                first->next=second;
                first=second;
                first->next=NULL;
        }

	printf("LIST 1 is :-\n");
	first=bkup1;
	for(j=1;j<=3;j++)
	{
		printf("%d\n",first->i);
		first=first->next;
	}
	printf("LIST 2 is :-\n");
	first=bkup2;
	for(j=1;j<=3;j++)
	{
		printf("%d\n",first->i);
		first=first->next;
	}

	printf("Contacted list is :-\n");
	first=bkup1;
	first=first->next;
	first=first->next;
	first->next=bkup2;
	for(j=1;j<7;j++)
	{
		printf("%d\n",bkup1->i);
		bkup1=bkup1->next;	
	}

	return(0);
}
