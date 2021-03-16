#include <bits/stdc++.h>
using namespace std;
int n,q,a,b,x[100010];
struct data
{
	int mx1,mx2,sum;
}tree[500010];
char c;
void updateT(int nd1,int nd2,int node)
{
	tree[node].mx1 = max(tree[nd1].mx1,tree[nd2].mx1);
	tree[node].mx2 = max(min(tree[nd1].mx1,tree[nd2].mx1),max(tree[nd1].mx2,tree[nd2].mx2));
	tree[node].sum = tree[node].mx1+tree[node].mx2;
}
void build(int node, int left, int right)
{
//	printf("%d %d\n",left,right);
    if(left==right)
	{
		tree[node].mx1 = x[left];
		tree[node].mx2 = -1;
		tree[node].sum = x[left];
        return;
    }
    int nd1,nd2,mid;
    mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	updateT(nd1,nd2,node);
}
void update(int node,int left ,int right, int target,int v)
{
	int nd1,nd2,mid;
	if(left ==right && right == target)
	{
		tree[node].mx1 = tree[node].sum =  v;
		tree[node].mx2 = -1;
        return;
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	if(target<=mid)update(nd1,left,mid,target,v);
    else update(nd2,mid+1,right,target,v);
    updateT(nd1,nd2,node);
}
data find(int node,int left,int right,int leftT,int rightT)
{
	int nd1,nd2,mid;
	data res,tmp1,tmp2;
	if(left>rightT || right<leftT)
	{
		res.mx1 = res.mx2 = res.sum = 0;
		return res;
	} 
	if(left >=leftT && right <= rightT)
	{
		return tree[node];
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	tmp1 = find(nd1,left,mid,leftT,rightT);
	tmp2 = find(nd2,mid+1,right,leftT,rightT);
	res.mx1 = max(tmp1.mx1,tmp2.mx1);
	res.mx2 = max(min(tmp1.mx1,tmp2.mx1),max(tmp1.mx2,tmp2.mx2));
	res.sum = res.mx1+res.mx2;
	return res;
}
int main()
{ 
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&x[i]);
	}
	build(1,1,n);
	scanf("%d",&q);
	while(q--)
	{
		c = '!';
		while(!isalpha(c))
		{
			c = getchar();
		}
		scanf("%d %d",&a,&b);
		switch(c)
		{
			case 'Q':
				printf("%d\n",find(1,1,n,a,b).sum);
				break;
			case 'U':
				update(1,1,n,a,b);
				break;
			
		}
	}
	return 0;
}