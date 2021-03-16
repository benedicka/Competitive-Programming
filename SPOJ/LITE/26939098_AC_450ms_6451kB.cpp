#include<bits/stdc++.h>
using namespace std;
int n,q,a,b,c,tree[3][500010],lazy[500010];
void updateT(int nd1,int nd2,int node)
{
	for(int i=0;i<2;i++)tree[i][node] = tree[i][nd1]+tree[i][nd2];
}
void pushD(int node,int left,int right)
{
	swap(tree[0][node],tree[1][node]);
	if(left!=right)
	{
		lazy[2*node] += lazy[node];
		lazy[2*node] %=2;
		lazy[2*node+1] += lazy[node];
		lazy[2*node+1] %=2;
	}
	lazy[node] = 0;
}
void build(int node, int left, int right)
{
//	printf("%d %d\n",left,right);
	lazy[node] = 0;
    if(left==right)
	{
		tree[0][node] = 1;
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
void update(int node,int left,int right,int leftT,int rightT)
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
		lazy[node]++;
		pushD(node,left,right);
		return;
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	update(nd1,left,mid,leftT,rightT);
	update(nd2,mid+1,right,leftT,rightT);
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
		return tree[1][node];
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	return find(nd1,left,mid,leftT,rightT)+find(nd2,mid+1,right,leftT,rightT);
}
int main()
{
	scanf("%d %d",&n,&q);
	build(1,1,n);
	while(q--)
	{
		scanf("%d %d %d",&a,&b,&c);
		switch(a)
		{
			case 0:
				update(1,1,n,b,c);
				break;
			case 1:
				printf("%d\n",find(1,1,n,b,c));
				break;
		}
	}
	return 0;
}