#include <bits/stdc++.h>
using namespace std;
string str;
int k,cnt,l,m,r,ans;
vector < int > x;
bool ok(int a)
{
	int res=0,now = 0;
	for(int i=0;i<x.size();i++)
	{
		if(x[i]>a) return 0;
		if(now+x[i]<=a) now+=x[i];
        else 
        {
        	
            res++;
            now = x[i];
        }
	}
	if(now!=0) res++;
	return (res<=k);
}
int main()
{
	scanf("%d\n",&k);
	getline(cin,str);
	for(int i=0;i<str.size();i++)
	{
		cnt++;
        if(str[i]=='-' || str[i]==' ')
		{
            x.push_back(cnt);    
            cnt = 0;        
        }	
    }
 	if(cnt!=0) x.push_back(cnt);
 	l = 0;
 	r = ans = str.size();
 	while(l<=r)
 	{
 		m = (l+r)/2;
 		if(ok(m)) 
		{
			r =m-1;
			ans=min(ans,m);
		}
		else l =m+1;
	}
	printf("%d\n",ans);
	return 0;
}