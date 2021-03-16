#include<bits/stdc++.h>
using namespace std;
int t,n,q,cnt,v[300010],nxt[300010],a,b,c;
struct data
{
	int head;
	int tail;
} s[300010];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		for(int i=0;i<=q;i++)
		{
			s[i].head = -1;
			s[i].tail = -1;
			v[i] = -1;
			nxt[i] = -1;	
		}
		cnt = 0;
		while(q--)
		{
			scanf("%d",&a);
			if(a==1)
			{
				scanf("%d %d",&b,&c);
				v[cnt] = c;
				if(s[b].head==-1 || s[b].tail==-1) s[b].head = s[b].tail = cnt;
				else
				{
					nxt[cnt] = s[b].head;
					s[b].head = cnt;
				}
				cnt++;	
			}
			else if(a==2)
			{
				scanf("%d",&b);
				if(s[b].head==-1)
				{
					printf("EMPTY\n");
				}
				else 
				{
					printf("%d\n",v[s[b].head]);
					s[b].head = nxt[s[b].head];
					if(s[b].head==-1) s[b].tail = -1;
				}
			}
			else
			{
				scanf("%d %d",&b,&c);
				if(s[c].tail!=-1)
				{
					if(s[b].tail!=-1)
					{
						nxt[s[c].tail] = s[b].head;
						s[b].head = s[c].head;
					}
					else
					{
						s[b].tail = s[c].tail;
						s[b].head = s[c].head;
					}
					s[c].head = s[c].tail = -1;
				}
			}	
		}
	}	
	return 0;
}