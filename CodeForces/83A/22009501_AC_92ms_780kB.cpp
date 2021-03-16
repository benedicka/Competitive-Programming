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
	long long n,a[100010],ans=0,cnt=0,now;
	scanf("%lld",&n);
	for(int i=0;i<n;i++) scanf("%lld",&a[i]);
	now = a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]==now)
		{
			cnt++;
		}
		else
		{
			now = a[i];
			ans+=(cnt+1)*cnt/2;
			cnt = 1;
		}
	}
	ans+=(cnt+1)*cnt/2;
	printf("%lld\n",ans);
  	return 0;
}