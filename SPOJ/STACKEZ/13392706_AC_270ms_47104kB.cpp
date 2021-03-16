#include<stdio.h>
#include<stdlib.h>
struct data
{
	int n;
	data *next;
	data *prev;
}*head,*tail,*curr,*temp;
void pushdpn(int x)
{
	data *node;
	node =(data*) malloc(sizeof(data));
	node->n = x;
	if(head==NULL)
	{
		head = node;
		tail = node;
		tail->next = NULL;
		head->prev = NULL;
	}
	else
	{
		node->next = head;
		head->prev = node;
		head = node;
		head->prev = NULL;
	}
}
void popdpn()
{
	if(head!=NULL)
	{
		curr = head;
		head = curr->next;
		if(head!=NULL) head->prev = NULL;
		else tail = NULL;
		free(curr);
	}
}

int main()
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&a);
		if(a==1)
		{
			scanf("%d",&b);
			pushdpn(b);
		}
		else if(a==2)
		{
			popdpn();
		}
		else
		{
			if(head==NULL) printf("Empty!\n");
			else printf("%d\n",head->n);
		}
	}
	
	
	return 0;
}