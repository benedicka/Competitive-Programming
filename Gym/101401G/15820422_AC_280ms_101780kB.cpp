#include<stdio.h>
#include<climits>
#include<utility>
#include<algorithm>
using namespace std;
bool done[8000040];
int n,m,l,r;
char x[200010];
struct data
{
	int r,g,b;
}tree[8000040];
void build(int node,int left,int right)
{
	int mid,nd1,nd2;
	done[node] = 0;
	if(left==right)
	{
		tree[node].r = 0;
		tree[node].g = 0;
		tree[node].b = 0;
		if(x[left-1]=='R') tree[node].r+=1;
		else if(x[left-1]=='G') tree[node].g+=1;
		else if(x[left-1]=='B') tree[node].b+=1;
		return;
	}
	mid = (left+right)/2;
	nd1 = node*2;
	nd2 = nd1+1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	tree[node].r = tree[nd1].r+tree[nd2].r ;
	tree[node].g = tree[nd1].g+tree[nd2].g ;
	tree[node].b = tree[nd1].b+tree[nd2].b ;
}
void updaterange(int node,int left,int right,int q1,int q2)
{
	int mid;
	if(done[node]) return;
	if(left >= q1 && right <= q2)
    {
    	if(!done[2*node] && !done[2*node+1])
    	{
    		int a,b,c;
			a = tree[node].r;
			b = tree[node].b;
			c = tree[node].g;
			tree[node].r = c;
			tree[node].b = a;
			tree[node].g = b;
	        done[node] = 1;
		}
    	else
    	{
    		mid = (left+right)/2;
			int nd1,nd2;
			nd1 = 2*node;
			nd2 = 2*node+1;
    		if(!done[2*node]) updaterange(nd1,left,mid,q1,q2);
    		else if(!done[2*node+1]) updaterange(nd1+1,mid+1,right,q1,q2);
    		tree[node].r = tree[nd1].r+tree[nd2].r;
			tree[node].g = tree[nd1].g+tree[nd2].g;
			tree[node].b = tree[nd1].b+tree[nd2].b;
			done[node] = 1;
		}
    }
	if(right < q1 || left > q2 || left==right) return;
    mid = (left+right)/2;
	int nd1,nd2;
	nd1 = 2*node;
	nd2 = 2*node+1;
    updaterange(nd1,left,mid,q1,q2);        
    updaterange(nd1+1,mid+1,right,q1,q2);
    tree[node].r = tree[nd1].r+tree[nd2].r;
	tree[node].g = tree[nd1].g+tree[nd2].g;
	tree[node].b = tree[nd1].b+tree[nd2].b;
}
int main()
{
	scanf("%d %d",&n,&m);
	scanf("%s",&x);
	build(1,1,n);
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&l,&r);
		updaterange(1,1,n,l,r);
		printf("%d %d %d\n",tree[1].r,tree[1].g,tree[1].b);
	}
	return 0;
}