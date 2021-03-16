#include<bits/stdc++.h>
using namespace std;
int n,pt[200010],tree[2000010],q,l[100010],r[100010],a[100010],b[100010],cnt,lazy[2000010];
set < int > s;
set<int>::iterator it;
void pushD(int node,int left,int right)
{
	tree[node]+=lazy[node];
	if(left!=right)
	{
		lazy[2*node] += lazy[node];
		lazy[2*node+1] +=lazy[node];
	}
	lazy[node] = 0;
}
void update(int node,int left,int right,int leftT,int rightT)
{
	int mid;
//	printf("%d %d\n",pt[left],pt[right]);
	if(lazy[node])
	{
		pushD(node,left,right);
	}
	if(pt[left]>rightT || pt[right]<leftT) return;
	if(pt[left]>=leftT && pt[right]<=rightT)
	{
		lazy[node]+=1;
		pushD(node,left,right);
		//printf("%d %d %d\n",pt[left],pt[right],tree[node]);
		return;
	}
	if(left==right) return;
	mid = (left+right)/2;
    update(node*2,left,mid,leftT,rightT);        
    update(node*2+1,mid+1,right,leftT,rightT);
    tree[node] = max(tree[2*node],tree[2*node+1]);
}
int find(int node,int left,int right,int leftT,int rightT)
{
	int mid;
	if(lazy[node])
	{
		pushD(node,left,right);
	}
	if(pt[left]>rightT || pt[right]<leftT) return 0;
	if(pt[left]>=leftT && pt[right]<=rightT)
	{
		return tree[node];
	}
	mid = (left+right)/2;
    return max( find(node*2,left,mid,leftT,rightT) , find(node*2+1,mid+1,right,leftT,rightT) );
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		s.insert(a[i]);
		s.insert(b[i]);
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++)
	{
		scanf("%d %d",&l[i],&r[i]);
		s.insert(l[i]);
		s.insert(r[i]);
	}
	cnt = 1;
	for (it=s.begin();it!=s.end();it++)
	{
		pt[cnt++]  =*it;
	}	
	for(int i=0;i<n;i++)
	{
		update(1,1,cnt-1,a[i],b[i]);
	}
	for(int i=0;i<q;i++)
	{
		printf("%d\n",find(1,1,cnt-1,l[i],r[i]));
	}
	return 0;
}