#include<string>
#include<iostream>
using namespace std;
void Swap(int *a , int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int n,a[60],k,idx,tmp,ans=0;
	scanf("%d %d",&n,&k);
	k-=1;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		idx = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[idx]>a[j]) tmp = j;
		}
		Swap(&a[idx],&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>=a[k] && a[i]>0) ans++;
	}
	printf("%d\n",ans);
  	return 0;
}