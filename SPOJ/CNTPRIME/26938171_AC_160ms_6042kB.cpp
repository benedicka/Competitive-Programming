#include<bits/stdc++.h>
using namespace std;
bool notPrime[2000010];
int t,n,q,x[10010],tree[50010],lazy[50010],a,b,c,d;
void sieve()
{
	int mx = 2000000;
	for(int i=2;i*i<=mx;i++)
	{
		for(int j=i*i;j<=mx;j+=i)
		{
			notPrime[j] = 1;
		}
	}
}
void updateT(int nd1,int nd2,int node)
{
	tree[node] = tree[nd1]+tree[nd2];
}
void pushD(int node,int left,int right)
{
	tree[node] = (right-left+1)*(!notPrime[lazy[node]]);
	if(left!=right)
	{
		lazy[2*node] = lazy[node];
		lazy[2*node+1] = lazy[node];
	}
	lazy[node] = 0;
}
void build(int node, int left, int right)
{
//	printf("%d %d\n",left,right);
	lazy[node] = 0;
    if(left==right)
	{
		if(!notPrime[x[left]]) tree[node] = 1;
        return;
    }
    int nd1,nd2,mid;
    mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	updateT(nd1,nd2,node);
}
void update(int node,int left,int right,int leftT,int rightT,int v)
{
	//printf("%d %d\n",left,right);
	int nd1,nd2,mid;
	if(lazy[node])
	{
		pushD(node,left,right);
	}
	if(left>rightT || right<leftT) return;
	if(left >= leftT && right<=rightT)
	{
		lazy[node] = v;
		pushD(node,left,right);
		return;
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	update(nd1,left,mid,leftT,rightT,v);
	update(nd2,mid+1,right,leftT,rightT,v);
	updateT(nd1,nd2,node);
}
int find(int node,int left,int right,int leftT,int rightT)
{
	//printf("%d %d\n",left,right);
	int nd1,nd2,mid;
	if(lazy[node])
	{
		pushD(node,left,right);
	}
	if(left>rightT || right<leftT) return 0;
	if(left >= leftT && right<=rightT)
	{
		return tree[node];
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	return find(nd1,left,mid,leftT,rightT)+find(nd2,mid+1,right,leftT,rightT);
}
int main()
{
	sieve();
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%d %d",&n,&q);
		memset(tree,0,sizeof(tree));
		memset(lazy,0,sizeof(lazy));
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&x[i]);
		}
		build(1,1,n);
		printf("Case %d:\n",tc);
		while(q--)
		{
			scanf("%d",&a);
			switch(a)
			{
				case 1:
					scanf("%d %d",&b,&c);
					printf("%d\n",find(1,1,n,b,c));
					break;
				case 0:
					scanf("%d %d %d",&b,&c,&d);
					update(1,1,n,b,c,d);
					break;
			}
		}
	}
	return 0;
}