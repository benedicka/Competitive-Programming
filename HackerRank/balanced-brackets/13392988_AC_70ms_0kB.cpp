#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
	char x;
	struct data *next;
	struct data *prev;
}*head,*tail,*curr,*temp;
void pushdpn(char a)
{
	struct data *node;
	node = (struct data*)malloc(sizeof(struct data));
	node->x = a;
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
void popdpn()
{
	if(head!=NULL)
	{
		curr = head;
		head = curr->next;
		if(head!=NULL)head->prev = NULL;
		else tail = NULL;
		free(curr);
	}
}
int main()
{
	bool ok;
	int n,l;
	char input[1010];
	scanf("%d",&n);
	while(n--)
	{
		ok = 1;
		scanf("%s",input);
		l = strlen(input);
		for(int i=0;i<l;i++)
		{
			if(input[i]=='{' || input[i]=='[' || input[i]=='(') pushdpn(input[i]);
			else
			{
				if(head!=NULL && head->x =='(' && input[i]==')') popdpn();
				else if(head!=NULL && head->x =='{' && input[i]=='}') popdpn();
				else if(head!=NULL && head->x =='[' && input[i]==']') popdpn();
				else
				{
					ok = 0;
					break;
				}
			}
		}
		
		if(ok==1 && head==NULL) printf("YES\n");
		else printf("NO\n");
		while(head!=NULL)
		{
			popdpn();
		}
	}
	
	
	
	return 0;
}