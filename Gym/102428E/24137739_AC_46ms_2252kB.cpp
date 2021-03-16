#include<bits/stdc++.h>
using namespace std;
string x;
long long s,len,ans;
vector < int >  posE;
int nextE(int pos)
{
	int l=0,r=posE.size()-1,m,res=INT_MAX;
	while(l<=r)
	{
		m = (l+r)/2;
		if(posE[m]<pos) l = m+1;
		else 
		{
			res = min(res,posE[m]);
			r = m-1;
		}
	}
	return res;
}
int main()
{
	cin>>x;
	scanf("%lld",&s);
	len = x.size();
	for(int i=0;i<len+s-1;i++)
	{
		if(x[i%len]=='E') posE.push_back(i);
	}
	for(int i=0;i<len;i++)
	{
		
		if(x[i]=='E') ans+=s;
		else
		{
			int NE = nextE(i);
		//	printf("C : %d %d\n",i,NE);
			if(abs(i-NE)<=s-1)
			{
				ans+=(s-abs(i-NE));
			}
		}
	//	printf("%d %d\n",i,ans);
	}
	printf("%lld\n",ans);
	return 0;
}