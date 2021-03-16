#include<string>
#include<iostream>
#include<string.h>
using namespace std;
void Swap(int &a , int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int n,a[3010],idx,ans=1,tmp;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		idx = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[idx]>a[j]) idx = j;
		}
		Swap(a[idx],a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==ans) ans++;
	}
	printf("%d\n",ans);
  	return 0;
}