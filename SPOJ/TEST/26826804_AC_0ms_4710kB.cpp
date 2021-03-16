#include <bits/stdc++.h>
using namespace std;

char str[500010],k;
int t,n,q,tree[500010][5],a,b,lazy[500010];
void updateT(int nd1,int nd2,int node)
{
	for(int i=0;i<2;i++)
	{
		tree[node][i] = tree[nd1][i]+tree[nd2][i];
	}
}
void build(int node, int left, int right)
{
//	printf("%d %d\n",left,right);
	lazy[node] = 0;
    if(left==right)
	{
        if(str[left-1]=='1')
		{      
            tree[node][1] = 1;
            tree[node][0] = 0;
        }
        else
		{
            tree[node][1] = 0;
            tree[node][0] = 1;
        }
     //   printf("%d b %d t %d\n",left,tree[node].buka,tree[node].tutup);
        return;
    }
    int nd1,nd2,mid;
    mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	build(nd1,left,mid);
	build(nd2,mid+1,right);
	updateT(nd1,nd2,node);
	//printf("%d %d b %d t %d\n",left,right,tree[node].buka,tree[node].tutup);
}

void pending(int node)
{
	if(left!=right)
	{
		lazy[2*node]^=1;
		lazy[2*node+1]^=1;
	}
}
void update(int node,int left,int right,int leftT,int rightT)
{
	//printf("%d %d\n",left,right);
	int nd1,nd2,mid;
	if(lazy[node])
	{
		swap(tree[node][1],tree[node][0]);
		pending(node);
		lazy[node] = 0;
	}
	if(left>rightT || right<leftT) return;
	if(left >= leftT && right<=rightT)
	{
	//	printf("cekS: %d %d %d %d\n",left,right,tree[node][0],tree[node][1]);
		swap(tree[node][1],tree[node][0]);
		pending(node);
	//	printf("cek : %d %d %d %d\n",left,right,tree[node][0],tree[node][1]);
		return;
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	update(nd1,left,mid,leftT,rightT);
	update(nd2,mid+1,right,leftT,rightT);
	updateT(nd1,nd2,node);
}
int find(int node,int left,int right,int target)
{
	//printf("%d %d\n",left,right);
	int nd1,nd2,mid;
	if(lazy[node])
	{
		swap(tree[node][1],tree[node][0]);
		pending(node);
		lazy[node] = 0;
	}
	if(left ==right && right == target)
	{
		return tree[node][1]?1:0;
	}
	mid = (left+right)/2;
    nd1 = node*2;
	nd2 = nd1+1;
	if(target<=mid)return find(nd1,left,mid,target);
    else return find(nd2,mid+1,right,target);
}
int main()
{ 
	while(1)
	{
		scanf("%d",&a);
		if(a==42) break;
		printf("%d\n",a);
	}
}