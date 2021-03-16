#include<stdio.h>
#include<stdlib.h>

struct deck
{
	int card;
	struct deck *next;
	struct deck *prev;
}*head,*curr,*tail;
void pushdpn(int x)
{
	deck *node;
	node = (deck*) malloc(sizeof(deck));
	node->card = x;
	if(head==NULL)
	{
		head = node;
		tail = node;
		head->prev = NULL;
		tail->next = NULL;
	}
	else
	{

		node->next = head;
		head->prev = node;
		head = node;
		head->prev = NULL;
	}
}
void pushblkng(int x)
{
	deck *node;
	node = (deck*) malloc(sizeof(deck));
	node->card = x;
	if(head==NULL)
	{
		head = node;
		tail = node;
		head->prev = NULL;
		tail->next = NULL;
	}
	else
	{
		node->prev = tail;
		tail->next = node;
		tail = node;
		tail->next = NULL;
	}
}
void popdpn()
{
	if(head!=NULL)
	{
		curr = head;
		head = curr->next;
		if(head!=NULL)head->prev = NULL;
		free(curr);
	}
}
int main()
{
	int n,temp;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		for(int i=n;i>=1;i--)
		{
			pushdpn(i);
		}
		printf("Discarded cards:");
		while(head!=tail)
		{
			printf(" %d",head->card);
			popdpn();
			temp = head->card;
			popdpn();
			pushblkng(temp);
			
			if(head!=tail)printf(",");
		}
		printf("\n");
		printf("Remaining card: %d\n",head->card);
		popdpn();
	}
	return 0;
}