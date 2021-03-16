#include<bits/stdc++.h>
using namespace std;
int n,m,q1,q2,ans;
string x;
struct data
{
	int b,t,cnt;
}tree[5000040];
void build(int node,int start,int finish)
{
	int mid,nd1,nd2;
	if(start==finish)
	{
		tree[node].cnt = tree[node].b = tree[node].t = 0;
		if(x[start-1]=='(') tree[node].b = 1;
		else tree[node].t = 1;
		return;
	}
	mid = (start+finish)/2;
	nd1 = 2*node;
	nd2 = nd1+1;
	build(nd1,start,mid);
	build(nd2,mid+1,finish);
	tree[node].b = tree[nd1].b+tree[nd2].b-min(tree[nd1].b,tree[nd2].t);
	tree[node].t = tree[nd1].t+tree[nd2].t-min(tree[nd1].b,tree[nd2].t);
	tree[node].cnt = tree[nd1].cnt + tree[nd2].cnt + 2*min(tree[nd1].b,tree[nd2].t);
}
data find(int node,int start,int finish)
{
	data res,x,y;
	int nd1,nd2,mid;
	if(start>=q1 && finish<=q2)
	{
		return tree[node];
	}
	if(finish<q1 || start>q2 )
	{
		res.b= res.t = res.cnt = 0;
		return res;
	}
	mid = (start+finish)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	x = find(nd1,start,mid);
	y = find(nd2,mid+1,finish);
	res.b = x.b+y.b-min(x.b,y.t);
	res.t = x.t+y.t-min(x.b,y.t);
	res.cnt = x.cnt + y.cnt + 2*min(x.b,y.t);
	return res;
}
int main()
{
	cin>>x;
	n = x.size();
	build(1,1,n);
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d %d",&q1,&q2);
		printf("%d\n",find(1,1,n).cnt);
	}
	return 0;
}