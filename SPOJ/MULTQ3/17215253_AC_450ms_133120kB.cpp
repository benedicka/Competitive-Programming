#include<bits/stdc++.h>
using namespace std;
int n,m,q1,q2,ans,a,b,c;
string x;
struct data
{
	int cnt[4];
}tree[5000040];
long long lazy[5000040] = {0};
void build(int node,int start,int finish)
{
	int mid,nd1,nd2;
	if(start==finish)
	{
		tree[node].cnt[0] = 1;
		tree[node].cnt[1] = 0;
		tree[node].cnt[2] = 0;
		return;
	}
	mid = (start+finish)/2;
	nd1 = 2*node;
	nd2 = nd1+1;
	build(nd1,start,mid);
	build(nd2,mid+1,finish);
	for(int i=0;i<3;i++)
	{
	    tree[node].cnt[i] = tree[2*node].cnt[i]+tree[2*node+1].cnt[i];
	}
}
int find(int node,int start,int finish)
{
	int nd1,nd2,mid,a,b,res;
	lazy[node]%=3;
	if(lazy[node]!=0)
	{
		int x,y,z;
		for(int i=0;i<lazy[node];i++)
		{
			x = tree[node].cnt[0];
			y = tree[node].cnt[1];
			z = tree[node].cnt[2];
			tree[node].cnt[1] = x;
			tree[node].cnt[2] = y;
			tree[node].cnt[0] = z;	
		}
	    if(left != right)
	    {
	        lazy[node*2]  += lazy[node];                  
	        lazy[node*2+1]  += lazy[node];                
	    }
	    lazy[node] = 0;                          
	}
	if(start>=q1 && finish<=q2)
	{
	//	printf("cek : %d %d\n",start,finish);
		return tree[node].cnt[0];
	}
	if(finish<q1 || start>q2 )
	{
		return 0;
	}
	mid = (start+finish)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	a = find(nd1,start,mid);
	b = find(nd2,mid+1,finish);
	res = a+b;
	return res;
}
void update(int node,int left,int right,int q1,int q2)
{
	int mid;
//	printf("curr : %d %d\n",left,right);
	if(lazy[node]!=0)
	{
		int x,y,z;
		for(int i=0;i<lazy[node]%3;i++)
		{
			x = tree[node].cnt[0];
			y = tree[node].cnt[1];
			z = tree[node].cnt[2];
			tree[node].cnt[1] = x;
			tree[node].cnt[2] = y;
			tree[node].cnt[0] = z;	
		}
        if(left != right) 
        {
            lazy[node*2] += lazy[node];                  
            lazy[node*2+1] += lazy[node];                
        }
        lazy[node] = 0;       	                          
	}
	if(left >= q1 && right <= q2)
    {
    //	printf("cek : %d %d\n",left,right);
        int x,y,z;
		x = tree[node].cnt[0];
		y = tree[node].cnt[1];
		z = tree[node].cnt[2];
		tree[node].cnt[1] = x;
		tree[node].cnt[2] = y;
		tree[node].cnt[0] = z;
        if(left != right)
        {
            lazy[node*2] += 1;
            lazy[node*2+1] += 1;
        }
        lazy[node] = 0;
        return;
    }
	if(right < q1 || left > q2 || left==right) return;
    mid = (left+right)/2;
    update(node*2,left,mid,q1,q2);        
    update(node*2+1,mid+1,right,q1,q2);
	for(int i=0;i<3;i++)
	{
	    tree[node].cnt[i] = tree[2*node].cnt[i]+tree[2*node+1].cnt[i];
	}
}
int main()
{
	scanf("%d %d",&n,&m);
	build(1,1,n);
	while(m--)
	{
		scanf("%d %d %d",&a,&q1,&q2);
		q1+=1;
		q2+=1;
		if(a==1)
		{
			
			ans = find(1,1,n);
			printf("%d\n",ans);
		}
		else
		{
			update(1,1,n,q1,q2);
		}
	}
	return 0;
}
