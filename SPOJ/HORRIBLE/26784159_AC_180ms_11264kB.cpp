#include<bits/stdc++.h>
using namespace std;
long long t,n,q,a[100010],tree[500010],x,y,z,lazy[500010],b;
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
	scanf("%lld",&t);
	while(t--)
	{
		memset(tree,0,sizeof(tree));
		memset(lazy,0,sizeof(lazy));
		scanf("%lld %lld",&n,&q);
		while(q--)
		{
			scanf("%lld",&x);
			switch(x)
			{
				case 0:
					scanf("%lld %lld %lld",&y,&z,&b);
					updateR(1,1,n,y,z,b);
					break;
				case 1:
					scanf("%lld %lld",&y,&z);
					printf("%lld\n",find(1,1,n,y,z));
					break;
			}
		}
	}
	return 0;
}