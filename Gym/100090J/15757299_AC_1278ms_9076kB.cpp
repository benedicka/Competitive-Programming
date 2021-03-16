#include<bits/stdc++.h>
using namespace std;
int n,p,a,q;
string z;
struct data
{
	int n;
	data *next;
	data *prev;
}*head,*tail,*curr,*temp,*now,*l1,*r1;
void pushdpn(int x)
{
	data *node;
	node =(data*) malloc(sizeof(data));
	node->n = x;
	curr = node;
	if(head==NULL)
	{
		head = node;
		tail = node;
		tail->next = NULL;
		head->prev = NULL;
	}
	else
	{
		node->prev = head;
		head->next = node;
		head = node;
		head->next = NULL;
	}
}
void pushkiri(int x)
{
	data *node;
	node =(data*) malloc(sizeof(data));
	node->n = x;
	l1 = now->prev;
	if(l1==NULL)
	{
		node->next = tail;
		tail->prev = node;
		tail = node;
		node->prev = NULL;
		return;
	}
	else
	{
		l1->next = node;
		node->prev = l1;
		now->prev = node;
		node->next = now;
	}
}
void pushkanan(int x)
{
	data *node;
	node =(data*) malloc(sizeof(data));
	node->n = x;
	l1 = now->next;
	if(l1==NULL)
	{
		pushdpn(a);
		return;
	}
	else
	{
		now->next = node;
		node->prev = now;
		l1->prev = node;
		node->next = l1;
	}
}
int main()
{
	scanf("%d %d",&n,&p);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a);
		pushdpn(a);
		if(i==p) now = curr;
	}
	scanf("%d",&q);
	while(q--)
	{
			cin>>z;
			if(z=="insertLeft")
			{
				scanf("%d",&a);
				pushkiri(a);
			}
			else if(z=="insertRight")
			{
				scanf("%d",&a);
				pushkanan(a);
			}
			else if(z=="moveRight")
			{
				if(now->next!=NULL) now = now->next;
			}
			else if(z=="moveLeft")
			{
				if(now->prev!=NULL) now = now->prev;
			}
			else if(z=="print") 
			{
				printf("%d\n",now->n);
			}
		
	}
	
	return 0;
}