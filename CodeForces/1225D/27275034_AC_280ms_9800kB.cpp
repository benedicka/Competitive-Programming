#include <bits/stdc++.h>
using namespace std;
int n,k,x[100010],primelist[100010],jum;
long long ans;
bool prime[100010],done;
vector < pair < int , int > > tmp;
map < vector < pair < int , int > > , int > mp;
void sieve()
{
	int mx=1e5;
	memset(prime,1,sizeof(prime));
	prime[0] = prime[1] = 0;
	for(int i=2;i*i<=mx;i++)
	{
		for(int j=i*i;j<=mx;j+=i)
		{
			prime[j] = 0;
		}
	}
	for(int i=2;i<=mx;i++)
	{
		if(prime[i])
		{
			primelist[jum++] = i;
		}
	}
}
vector < pair < int , int > > fact(int a)
{
	vector < pair < int , int > > res;
	int cnt = 0;
	if(prime[a])
	{
		res.push_back(make_pair(a,1));
		return res;
	}
	for(int i=0;i<jum;i++)
	{
		cnt = 0;
		if(((long long) primelist[i]*primelist[i])>a) break;
		while(a%primelist[i]==0)
		{
			a/=primelist[i];
			cnt++;
		}
		if(cnt%k)	res.push_back(make_pair(primelist[i],cnt%k));
		if(a==1) break;
	}
	if(a>1) res.push_back(make_pair(a,1));
	return res;
}
void cetak(vector < pair < int , int > >a)
{
	for(int i=0;i<a.size();i++)
	{
		printf(" (%d %d) ",a[i].first,a[i].second);
	}
}
int main()
{
	sieve();
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	//	printf("%d : ",x[i]);
		mp[fact(x[i])]++;
		tmp = fact(x[i]);	
	//	cetak(tmp);
	//	printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		tmp =  fact(x[i]);
		mp[tmp]--;
		for(int j=0;j<tmp.size();j++)
		{
			tmp[j].second = k-tmp[j].second;
		}
		ans+=mp[tmp];
	}
	printf("%lld\n",ans);
	return 0;
}