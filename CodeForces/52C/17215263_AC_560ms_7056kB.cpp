#include<bits/stdc++.h>
using namespace std;
int a[200010],tree[800040],lazy[800040],t,n,q,i1,i2,v,ans;
char x;
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

int find(int node,int left,int right,int q1,int q2)
{
	int x,y,nd1,nd2,mid;
	 
	if(lazy[node]!=0)
	{
		tree[node] +=lazy[node];  
        if(left != right)
        {
            lazy[node*2] += lazy[node];                  
            lazy[node*2+1] += lazy[node];                
        }
        lazy[node] = 0;                          
	}
	if(left>=q1 && right<=q2) return tree[node];
	if(right<q1 || left>q2) return INT_MAX;
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	x = find(nd1,left,mid,q1,q2);
	y = find(nd2,mid+1,right,q1,q2);
	return min(x,y);
}
void updaterange(int node,int left,int right,int q1,int q2)
{
	int mid;
	if(lazy[node]!=0)
	{
		tree[node] += lazy[node];  
        if(left != right)
        {
            lazy[node*2] += lazy[node];                  
            lazy[node*2+1] += lazy[node];                
        }
        lazy[node] = 0;       	                          
	}
	if(left >= q1 && right <= q2)
    {
        tree[node] += v;
        if(left != right)
        {
            lazy[node*2]+=v;
            lazy[node*2+1]+=v;
        }
        return;
    }
	if(right < q1 || left > q2) return;
    mid = (left+right)/2;
    updaterange(node*2,left,mid,q1,q2);        
    updaterange(node*2+1,mid+1,right,q1,q2);   
    tree[node] = min(tree[node*2],tree[node*2+1]);
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	build(1,1,n);
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d %d%c",&i1,&i2,&x);
		i2+=1;
		i1+=1;
		
		if(x=='\n')
		{
			if(i1<=i2)ans = find(1,1,n,i1,i2);
			else
			{
				ans = min(find(1,1,n,1,i2),find(1,1,n,i1,n));
			} 
			printf("%d\n",ans);
		}
		else
		{
			scanf("%d",&v);
			if(i1<=i2)updaterange(1,1,n,i1,i2);
			else
			{
				updaterange(1,1,n,1,i2);
				updaterange(1,1,n,i1,n);
			}
		}
	}
	return 0;
}