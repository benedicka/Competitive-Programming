#include<stdio.h>
int a[100010],tree[400040],t,n,q,q1,q2,ans;
int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}
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
	tree[node] = min(tree[nd1],tree[nd2]);
}

int find(int node,int left,int right)
{
	int x,y,nd1,nd2,mid;
	if(left>=q1 && right<=q2) return tree[node];
	if(right<q1 || left>q2 ) return 20000000;
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	x = find(nd1,left,mid);
	y = find(nd2,mid+1,right);
	return min(x,y);
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
			scanf("%d %d",&q1,&q2);
			ans = find(1,1,n);
			printf("%d\n",ans);
		}
	}
	return 0;
}