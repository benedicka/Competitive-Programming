#include<bits/stdc++.h>
using namespace std;
int n,a[200010],terdekat[2000010],ans;
bool ada[1000010];
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		ada[a[i]] = 1;
	}
	sort(a,a+n);
	for(int i=1;i<=1000001;i++)
	{
		terdekat[i] = ada[i-1]?(i-1):terdekat[i-1];
	}
	for(int i=1000002;i<=2000000;i++)
	{
		terdekat[i] = terdekat[i-1];
	}
	for(int i=1;i<=1000000;i++)
	{
		if(!ada[i]) continue;
		for(int j=2*i;j<=2000000;j+=i)
        {
            ans = max(ans,terdekat[j]%i);
        }
	}
	printf("%d\n",ans);
	return 0;
}