#include<map>
#include<stdio.h>
using namespace std;
int cnt=0;
map < int , bool > mp;
int main()
{
	long long n,k;
	scanf("%lld %lld",&n,&k);
	if(k>100) printf("No\n");
	else
	{
		for(int i=1;i<=k;i++)
		{
			if(!mp[n%i])
			{
				cnt++;
				mp[n%i] = 1;
			}
		}
		if(cnt==k) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}