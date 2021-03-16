#include<bits/stdc++.h>
using namespace std;
int lazy[41000040],t,n,l[40010],r[40010],v,ans,fin;
set < int > s;
void find(int node,int left,int right,int q1,int q2)
{
	int nd1,nd2,mid;
	if(lazy[node]!=0)
	{
        s.insert(lazy[node]);
		return;                         
	}
	if(left==right) return;
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	find(nd1,left,mid,q1,q2);
	find(nd2,mid+1,right,q1,q2);
}
void update(int node,int left,int right,int q1,int q2)
{
	int mid;
	if(right < q1 || left > q2) return;
	if(left >= q1 && right <= q2)
    {
        lazy[node] = v;
        return;
    }
	if(lazy[node]!=0)
	{
        if(left != right)
        {
            lazy[node*2] = lazy[node];                  
            lazy[node*2+1] = lazy[node];                
        }
        lazy[node] = 0;       	                          
	}
	
	
    mid = (left+right)/2;
    update(node*2,left,mid,q1,q2);        
    update(node*2+1,mid+1,right,q1,q2);   
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		s.clear();
		scanf("%d",&n);
		memset(lazy,0,sizeof(lazy));
		ans = 0;
		fin = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&l[i],&r[i]);
			fin = max(fin,r[i]);
		}
		for(int i=0;i<n;i++)
		{
			v = i+1;
			update(1,1,fin,l[i],r[i]);
		}
		
		find(1,1,fin,1,fin);
		printf("%d\n",s.size());
	}
	return 0;
}