#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pd pair<double,double>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define fi first
#define se second
#define endl "\n"
#define debug(x) cout << (#x) << " : " << (x) << endl
using namespace std;
const int MX=51;
map<string,vector<string>> adj;
map<string,long double> dp;
long double solve(string a){
	if(dp[a]!=-1){
		return dp[a];
	}
	if(adj[a].empty())return dp[a]=0;
	dp[a]=solve(adj[a][0])+solve(adj[a][1]);
	dp[a]/=2;
	return dp[a];
}
int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	int n,q;
	cin>>n>>q;
	string k;
	cin>>k;
	for(int i=0;i<n;++i){
		string a,b,c;
		cin>>a>>b>>c;
		adj[a].pb(b);
		adj[a].pb(c);
		dp[a]=dp[b]=dp[c]=-1;
	}	
	dp[k]=1;
	string ans;
	long double an=-1;
	for(int i=0;i<q;++i){
		string a;
		cin>>a;
		if(solve(a)>an){
			an=solve(a);
			ans=a;
		}
	}
	cout<<ans<<endl;
	return 0;
}
