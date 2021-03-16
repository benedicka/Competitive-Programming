#include<stdio.h>
int t,n,q,cnt,v[300010],head[300010],nxt[300010],a,b,c,tail[300010];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		for(int i=0;i<=300010;i++)
		{
			head[i] = -1;
			v[i] = -1;
			nxt[i] = -1;
			tail[i] = -1;
		}
		cnt = 0;
		while(q--)
		{
			scanf("%d",&a);
			if(a==1)
			{
				scanf("%d %d",&b,&c);
				v[cnt] = c;
				if(head[b]==-1 || tail[b]==-1) head[b] = tail[b] = cnt;
				else
				{
					nxt[cnt] = head[b];
					head[b] = cnt;
				}
				cnt++;	
			}
			else if(a==2)
			{
				scanf("%d",&b);
				if(head[b]==-1)
				{
					printf("EMPTY\n");
				}
				else 
				{
					printf("%d\n",v[head[b]]);
					head[b] = nxt[head[b]];
					if(head[b]==-1) tail[b] = -1;
				}
			}
			else
			{
				scanf("%d %d",&b,&c);
				if(tail[c]!=-1)
				{
					if(tail[b]!=-1)
					{
						nxt[tail[c]] = head[b];
						head[b] = head[c];
					}
					else
					{
						tail[b] = tail[c];
						head[b] = head[c];
					}
					head[c] = tail[c] = -1;
				}
			}
		}
	}	
	return 0;
}