/*Have a linked list of 10 nodes. Each node has an int value. Search for a value in the linked list and print "Present" if you find it. This value to be searched, is entered by the user.*/

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
	int ch,j,k=0,val;

	first=malloc(sizeof(struct node));
	first->next=NULL;
	bkup=first;

	for(j=1;j<=10;j++)
	{
		printf("Enter value for node %d : ",j);
		scanf("%d",&ch);
		first->i=ch;

		second=malloc(sizeof(struct node));
		first->next=second;
		first=second;
		first->next=NULL;
	}

	printf("Enter value to be searched :- ");
	scanf("%d",&val);

	for(j=1;j<=10;j++)
	{
		if(bkup->i==val)
		{
			k++;
		}
		bkup=bkup->next;
	}

	if(k==0)
	{
		printf("ABSENT\n");
	}
	else
	{
		printf("PRESENT\n");
	}
	return(0);
}

