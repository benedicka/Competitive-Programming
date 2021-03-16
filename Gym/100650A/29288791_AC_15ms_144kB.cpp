#include<bits/stdc++.h>
using namespace std;
long long ans;
vector < string > tkns;
int count(string a, string b) 
{ 
    int m = a.length(); 
    int n = b.length();
    int lookup[m + 1][n + 1] = { { 0 } }; 
  
    for (int i = 0; i <= n; ++i) 
        lookup[0][i] = 0; 
  
    for (int i = 0; i <= m; ++i) 
        lookup[i][0] = 1; 
    for (int i = 1; i <= m; i++) 
    { 
        for (int j = 1; j <= n; j++) 
        { 
            if (a[i - 1] == b[j - 1]) 
                lookup[i][j] = lookup[i - 1][j - 1] +  
                               lookup[i - 1][j]; 
                  
            else
                lookup[i][j] = lookup[i - 1][j]; 
        } 
    } 
  
    return lookup[m][n]; 
}
void f(int id,int cnt,int now,string init)
{
	string tmp;
	int res;
	if(now>=init.size()-1 && id!=tkns.size()-1) return;
	if(now==init.size()) return;
	if(id==tkns.size()-1)
	{
		for(int i=now;i<init.size();i++)
		{
			tmp+=init[i];
		}
		res = count(tkns[id],tmp);
	//	cout<<tkns[id]<<" "<<tmp<<" "<<res<<"\n";
	//	cout<<"_________________________________"<<"\n";
		if(id!=0)ans+=(cnt*res);
		else ans = res;
	//	cout<<"ans = "<<ans<<" "<<cnt*res<<"\n";
		return;
	}
	if(id>0 && !cnt) return;
	for(int i=now;i<init.size();i++)
	{
		tmp+=init[i];
		res = count(tkns[id],tmp);
	//	cout<<tkns[id]<<" "<<tmp<<" "<<res<<"\n";
		if(!res) return;
		if(id!=0)f(id+1,cnt*count(tkns[id],tmp),i+1,init);
		else f(id+1,count(tkns[id],tmp),i+1,init);
	}
}
int main()
{
	int n;
	string s;
	map < string , bool > mp;
	while(scanf("%d",&n)!=EOF)
	{
		if(!n) break;
		mp.clear();
		getline(cin,s);
		for(int i=0;i<n;i++)
		{
			getline(cin,s);
			mp[s] = 1;
		}
		while(getline(cin,s))
		{
		//	cout<<s<<"\n";
			if(s=="LAST CASE") break;
			ans = 0;
			stringstream ss(s);
			string init,token,initO;
			tkns.clear();
			ss>>init;
			initO = init;
			for(int i=0;i<init.size();i++) init[i]+=32;
			int cnt = 0;
		//	cout<<"A = "<<init<<" "<<initO<<"\n";
		//	cout<<"tes : "<<"\n";
			while(ss>>token)
			{
				if(mp[token]) continue;
				tkns.push_back(token);
			//	cout<<token<<"\n";
			}
			f(0,0,0,init);
			if(ans) cout<<initO<<" can be formed in "<<ans<<" ways"<<"\n";
			else cout<<initO<<" is not a valid abbreviation"<<"\n";
		}
	}
	return 0;
}