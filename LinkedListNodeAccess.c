/*A program, in which you have a linked list of 5 nodes. Give an option to print any node value (every node has one  int value). Go to that specific node (traverse) and print that specific int value.*/

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
	int ch,j,k;

	first=malloc(sizeof(struct node));
	first->next=NULL;
	bkup=first;

	for(j=1;j<=5;j++)
	{
		printf("Enter value for node %d : ",j);
		scanf("%d",&ch);
		first->i=ch;

		second=malloc(sizeof(struct node));
		first->next=second;
		first=second;
		first->next=NULL;
	}

	do
	{
		printf("Enter the node you want to fetch the value from :- ");
		scanf("%d",&k);
		if(k>0&&k<=5)
		{
			for(j=1;j<k;j++)
			{
				bkup=bkup->next;
			}
			printf("value at node %d is = %d\n",k,bkup->i);
		}
		else
		{
			printf("Wrong choice !! Please choose a node between 1 and 5\n");
		}
	}while(k<0||k>5);
	return(0);
}
