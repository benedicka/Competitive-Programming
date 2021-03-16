#include<bits/stdc++.h>
using namespace std;
int t,n,q,a[500010],tree[2000010],x,y,z;
void build(int node,int left,int right)
{
	int mid,nd1,nd2;
	if(left==right)
	{
		tree[node] = a[left];
		return;
	}
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	tree[node] = tree[nd1]+tree[nd2];
}
void update(int node, int left, int right,int target,int v)
{
	int mid,nd1,nd2;
	if(left>target) return;
	if(right<target) return;
	if(left==target && right==left)
	{
		a[left]+=v;
		tree[node] += v;
		return;
	}
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	update(nd1,left,mid,target,v);
	update(nd2,mid+1,right,target,v);
	tree[node] = tree[nd1]+tree[nd2];
}
int find(int node, int left, int right,int leftT,int rightT)
{
	int mid,nd1,nd2;
	if(left>rightT) return 0;
	if(right<leftT) return 0;
//	printf("c = %d %d %d\n",left,right,tree[node]);
	if(left>=leftT && right<=rightT)
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
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%d %d",&n,&q);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		build(1,1,n);
		printf("Case %d:\n",tc);
		while(q--)
		{
			scanf("%d",&x);
			switch(x)
			{
				case 1:
					scanf("%d",&y);
					printf("%d\n",a[y+1]);
					update(1,1,n,y+1,-1*a[y+1]);
					break;
				case 2:
					scanf("%d %d",&y,&z);
					update(1,1,n,y+1,z);
					break;
				case 3:
					scanf("%d %d",&y,&z);
					printf("%d\n",find(1,1,n,y+1,z+1));
					break;
			}
		}
	}
	return 0;
}