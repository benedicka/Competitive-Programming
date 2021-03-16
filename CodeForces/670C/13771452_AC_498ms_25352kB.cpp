#include<map>
#include<utility>
#include<stdio.h>
using namespace std;
long long jum,jum_ans,ans,n,m,audio[200010],sub[200010],a;
map < int , int > mp;
pair < int , int > cek;
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a);
		mp[a]++;
	}
	scanf("%lld",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%lld",&audio[i]);
	}	
	ans = 1;
	for(int i=0;i<m;i++)
	{
		scanf("%lld",&sub[i]);
	}
	cek.first = 0;
	cek.second = 0;
	for(int i=0;i<m;i++)
	{
		
			if(cek.first<mp[audio[i]])
			{
		
				ans = i+1;
				cek.first = mp[audio[i]];
				cek.second = mp[sub[i]];
			}
			else if(cek.first==mp[audio[i]]&& cek.second<mp[sub[i]])
			{
			
				ans = i+1;
				cek.first = mp[audio[i]];
				cek.second = mp[sub[i]];
			}
	}
	printf("%lld\n",ans);
	return 0;
}