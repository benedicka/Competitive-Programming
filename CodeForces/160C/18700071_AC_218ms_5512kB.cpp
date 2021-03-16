#include<bits/stdc++.h>
using namespace std;
long long n,k,x[100010],y[100010],cnt,tmp,idx;
map < long long , long long > mp;
int main()
{
	scanf("%lld %lld",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
		if(mp[x[i]]==0) y[cnt++] = x[i];
		mp[x[i]]++;
	}
	sort(x,x+n);
	sort(y,y+cnt);
	k-=1;
	tmp = x[k/n];
	for(int i=0;i<n;i++)
	{
		if(x[i]==x[k/n])
		{
			idx = i;
			break;
		}
	}
	//printf("idx = %lld\n",idx);
	k-=((idx)*n-1);
//	printf("k = %lld\n",k);
	for(int i=0;i<cnt;i++)
	{
	//	printf("y = %lld\n",y[i]);
		k-=mp[tmp]*mp[y[i]];
		if(k<=0)
		{
			printf("%lld ",tmp);
			printf("%lld\n",y[i]);
			break;
		}
	}
	return 0;
}