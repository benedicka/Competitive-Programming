#include<stdio.h>
#include<stdlib.h>
int n,x,q1,q2,q,a;
double score[100010],tree[500040],b,diff;
bool c;
void build(int node,int left,int right)
{
	int mid,nd1,nd2;
	if(left==right)
	{
		tree[node] = score[left];
		return;
	}
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	tree[node] = tree[nd1]+tree[nd2];
}

double find(int node,int left,int right)
{
	double x,y;
	int nd1,nd2,mid;
	if(left>=q1 && right<=q2) return tree[node];
	if(right<q1 || left>q2 ) return 0.0; 
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	x = find(nd1,left,mid);
	y = find(nd2,mid+1,right);
	return x+y;
}
void update(int node,int left,int right)
{
	int mid,nd1,nd2;
	if(right<a || left>a ) return; 
	if(left>=a && right<=a)
	{
		tree[node] += diff;
		return;
	}
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	update(nd1,left,mid);
	update(nd2,mid+1,right);
	tree[node] = tree[nd1]+tree[nd2];
}
int main()
{
	c = 1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&score[i]);
	}
	build(1,1,n);
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&x);
		if(x==1)
		{
			scanf("%d %lf",&a,&b);
			diff = b-score[a];
			score[a] = b;
			update(1,1,n);
		}
		else
		{
			scanf("%d %d",&q1,&q2);
			double jum;
			jum = find(1,1,n);
			printf("%.6lf\n",jum/(abs(q1-q2)+1));	
		}
	}
	return 0;
}