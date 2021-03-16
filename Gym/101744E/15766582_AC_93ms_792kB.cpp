#include<bits/stdc++.h>
using namespace std;
int n,m,l,r,a[100010],prev[100010];
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);	
		prev[i] = prev[i-1]+a[i];
	}
	while(m--)	
	{
		scanf("%d %d",&l,&r);
		if((prev[r]-prev[l-1])%2==0) printf("Sim\n");
		else printf("Nao\n");
	}
	return 0;
}