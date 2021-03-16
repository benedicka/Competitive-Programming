#include<bits/stdc++.h>
using namespace std;
long long tree[400010],lazy[400010],v;
void build(int node, int left , int right)
{
	long long mid,nd1,nd2;
	if(left==right)
	{
		tree[node] = 0;
		lazy[node] = 0;
		return;
	}
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1 + 1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	lazy[node] = 0;
	tree[node] = 0;
}
void updaterange(int node,int left, int right,int q1,int q2)
{
	long long mid,nd1,nd2;
	nd1 = 2*node;
	nd2 = nd1+1;
	if(lazy[node]!=0)
	{
		tree[node]+= (right-left+1)*lazy[node];
		if(left!=right)
		{
			lazy[nd1]+=lazy[node];
			lazy[nd2]+=lazy[node];
		}
		lazy[node] = 0;
	}
	if(left>=q1 && right<=q2)
	{
		tree[node]+= (right-left+1)*v;
		if(left!=right)
		{
			lazy[nd1]+=v;
			lazy[nd2]+=v;
		}
		return;
	}
	if(left>q2 || right<q1) return;
	mid = (left+right)/2;
	updaterange(nd1,left,mid,q1,q2);
	updaterange(nd2,mid+1,right,q1,q2);
	tree[node] = tree[nd1]+tree[nd2];
}
long long sum(int node,int left, int right,int q1,int q2)
{
	long long mid,nd1,nd2;
	nd1 = 2*node;
	nd2 = nd1+1;
	if(lazy[node]!=0)
	{
		tree[node]+= (right-left+1)*lazy[node];
		if(left!=right)
		{
			lazy[nd1]+=lazy[node];
			lazy[nd2]+=lazy[node];
		}
		lazy[node] = 0;
	}
	if(left>=q1 && right<=q2) return tree[node];
	if(right < q1 || left > q2) return 0;
	mid = (left+right)/2;
	return sum(nd1,left,mid,q1,q2)+sum(nd2,mid+1,right,q1,q2);
}
int main()
{
	int t,n,q,a,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		build(1,1,n);
		while(q--)
		{
			scanf("%d",&a);
			if(a==0)
			{
				scanf("%d %d %d",&x,&y,&v);
				updaterange(1,1,n,x,y);
			}
			else if(a==1)
			{
				scanf("%d %d",&x,&y);
				printf("%lld\n",sum(1,1,n,x,y));
			}
		}
	}
	return 0;
}