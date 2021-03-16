#include<stdio.h>
#include<iostream>
using namespace std;
long long t,n,q,a[100010],tree[500010],y,z,lazy[500010],b;
char x;
void pushD(long long node,long long left,long long right)
{
	if(lazy[node]!=0)
	{
		tree[node]+=(right-left+1)*lazy[node];
		if(left!=right)
		{
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node] = 0;
	}
}
void build(long long node,long long left,long long right)
{
	long long mid,nd1,nd2;
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
long long find(long long node, long long left, long long right,long long leftT,long long rightT)
{
	long long mid,nd1,nd2,sum=0;
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	pushD(node,left,right);
	if(left>rightT) return 0;
	if(right<leftT) return 0;
	if(left>=leftT && right<=rightT)
	{
		return tree[node];
	}
	sum += find(nd1,left,mid,leftT,rightT);
	sum += find(nd2,mid+1,right,leftT,rightT);
	return sum;
}
void updateR(long long node,long long left,long long right,long long leftT,long long rightT,long long v)
{
	long long mid;
	pushD(node,left,right);
	
	if(right < leftT || left > rightT) return;
	if(left >= leftT && right <= rightT)
    {
    	lazy[node]+=v;
        pushD(node,left,right);
        return;
    }
    mid = (left+right)/2;
    updateR(node*2,left,mid,leftT,rightT,v);        
    updateR(node*2+1,mid+1,right,leftT,rightT,v);   
    tree[node] = tree[node*2]+tree[node*2+1];
}
int main()
{

	scanf("%lld %lld",&n,&q);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	//getchar();
	build(1,1,n);
	while(q--)
	{
	//	printf("q = %lld\n",q);
		while(!isalpha(x))
		{
			x = getchar();
		}
		scanf("%lld %lld",&y,&z);
		//printf("i: %c %lld %lld\n",x,y,z);
		switch(x)
		{
			case 'Q':
				printf("%lld\n",find(1,1,n,y,z));
				break;
			case 'C':
				scanf("%lld",&b);
				updateR(1,1,n,y,z,b);
				break;
		}
		x = '!';
	}
	return 0;
}