#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
int n,m,q1,q2,ans;
string x;
struct data{
	int buka;
	int tutup;
	int jum;
}tree[5000040];
int min(int a, int b)
{
	if(a<b) return a;
	else return b;
}
void build(int node,int start,int finish)
{
	int mid,nd1,nd2;
	if(start==finish)
	{
		if(x[start-1]=='(') tree[node].buka = 1;
		else tree[node].tutup = 1;
		return;
	}
	mid = (start+finish)/2;
	nd1 = 2*node;
	nd2 = nd1+1;
	build(nd1,start,mid);
	build(nd2,mid+1,finish);
	tree[node].jum = tree[nd1].jum+tree[nd2].jum+2*min(tree[nd1].buka,tree[nd2].tutup);
	tree[node].buka = tree[nd2].buka + tree[nd1].buka-min(tree[nd1].buka,tree[nd2].tutup);
	tree[node].tutup =tree[nd1].tutup+tree[nd2].tutup-min(tree[nd1].buka,tree[nd2].tutup);
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
		res.buka = res.tutup = res.jum = 0;
		return res;
	}
	mid = (start+finish)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	x = find(nd1,start,mid);
	y = find(nd2,mid+1,finish);
	res.jum = x.jum+y.jum+2*min(x.buka,y.tutup);
	res.buka = y.buka +x.buka-min(x.buka,y.tutup);
	res.tutup =x.tutup+y.tutup-min(x.buka,y.tutup);
	return res;
}
int main()
{
	cin>>x;
	n = x.size();
	//printf("n = %d\n",n);
	build(1,1,n);
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d %d",&q1,&q2);
		printf("%d\n",find(1,1,n).jum);
	}
	return 0;
}