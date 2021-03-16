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
const int MX=5e5+5;
vector<pll> adj[MX];
ll x[MX],ans[MX];
int vis[MX];
multiset<ll> dfs(int u){
	vis[u]=1;
	multiset<ll> cur;
	for(auto i:adj[u]){
		int nx=i.fi;
		if(!vis[nx]){
			auto res=dfs(nx);
			for(ll j:res){
				if(j-i.se>=0){
					cur.insert(j-i.se);
					ans[u]++;
				}
			}
		}
	}
	cur.insert(x[u]);
	return cur;
}
int main(){
	freopen("car.in","r",stdin);
	ios::sync_with_stdio(false);cin.tie(NULL);
	int cas;
	cin>>cas;
	while(cas--){
		int n;
		cin>>n;
		for(int i=0;i<n;++i){
			adj[i].clear();
			ans[i]=vis[i]=0;
		}
		for(int i=0;i<n;++i){
			cin>>x[i];
		}
		for(int i=0;i<n-1;++i){
			int a,b,w;
			cin>>a>>b>>w;
			a--,b--;
			adj[a].pb({b,w});
			adj[b].pb({a,w});
		}
		auto s=dfs(0);
		for(int i=0;i<n;++i){
			if(i)cout<<" "<<ans[i];
			else cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}
