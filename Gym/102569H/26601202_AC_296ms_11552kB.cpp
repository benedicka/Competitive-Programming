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
int ans,n;
const int MX=2e5+1;
vector<int> adj[MX];
int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	cin>>n;
	for(int i=0;i<n-1;++i){
		int a,b;
		cin>>a>>b;
		a--,b--;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	ans=0;
	for(int i=0;i<n;++i){
		if((int)adj[i].size()==1){
			ans++;
		}
	}
	cout<<(ans+1)/2;
	return 0;
}
