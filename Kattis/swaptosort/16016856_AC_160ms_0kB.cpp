#include<bits/stdc++.h>
using namespace std;
int parent[1000010];
int n,k,a,b,l;
int findparent(int x)
{
	if(parent[x]==x) return x;
	else
	{
		parent[x] = findparent(parent[x]);
		return parent[x];
	}	
}

void unionset(int a,int b)
{
	int parent_a = findparent(a);
	int parent_b = findparent(b);
	if(parent_a==parent_b) return;
	else if(parent_a < parent_b) parent[parent_b] = parent[parent_a];
	else parent[parent_a] = parent[parent_b];
}

bool sameparent(int a,int b)
{
	findparent(a);
	findparent(b);
	if(parent[a]==parent[b]) return 1;
	else return 0;
}
int main()
{
	bool ok =1;
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		parent[i] = i;
	}
	for(int i=0;i<k;i++)
	{
		scanf("%d %d",&a,&b);
		unionset(a,b);
	}
	l = 1;
	while(l<n)
	{
		if(!sameparent(l,n))
		{
			ok = 0;
			break;
		}
		l++;
		n--;
	}
	if(ok) printf("Yes\n");
	else printf("No\n");
	return 0;
}