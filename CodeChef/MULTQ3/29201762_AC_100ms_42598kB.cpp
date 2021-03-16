#include<bits/stdc++.h>
using namespace std;
long long n,q,x[500010],tree[500010][5],a,b,c;
long long lazy[500010];
void updateN(long long node)
{
	for(int i=0;i<3;i++)
	{
		tree[node][i] = tree[2*node][i]+tree[2*node+1][i];
	}
}
void pushD(long long node,long long left,long long right)
{
	while(lazy[node]!=0)
	{
		swap(tree[node][0],tree[node][2]);
		swap(tree[node][2],tree[node][1]);	
		if(left!=right)
		{
			lazy[2*node]++;
			lazy[2*node]%=3;
			lazy[2*node+1]++;
			lazy[2*node+1]%=3;
		}
		lazy[node]--;
	}
}
void build(long long node,long long left, long long right)
{
	if(left==right)
	{
		tree[node][0] = 1;
		return;
	}
	long long mid = (left+right)/2;
	build(2*node,left,mid);
	build(2*node+1,mid+1,right);
	updateN(node);
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
		return tree[node][0];
	}
	sum += find(nd1,left,mid,leftT,rightT);
	sum += find(nd2,mid+1,right,leftT,rightT);
	return sum;
}
void updateR(long long node,long long left,long long right,long long leftT,long long rightT)
{
	long long mid;
	pushD(node,left,right);
	
	if(right < leftT || left > rightT) return;
	if(left >= leftT && right <= rightT)
    {
    	lazy[node]++;
    	lazy[node]%=3;
        pushD(node,left,right);
        return;
    }
    mid = (left+right)/2;
    updateR(node*2,left,mid,leftT,rightT);        
    updateR(node*2+1,mid+1,right,leftT,rightT);   
    updateN(node);
}
int main()
{
	scanf("%lld %lld",&n,&q);
	build(1,1,n);
	while(q--)
	{
		scanf("%lld %lld %lld",&c,&a,&b);
		a++;
		b++;
		switch(c)
		{
			case 0:
				updateR(1,1,n,a,b);
				break;
			case 1:
				//printf("ans : ");
				printf("%lld\n",find(1,1,n,a,b));
				break;
		}		
	}
	return 0;
}