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
const int MX=1e5+20;
vector<int> adj[MX];
int dis[MX],vis[MX];
int main(){
	freopen("jumping.in","r",stdin);
	ios::sync_with_stdio(false);cin.tie(NULL);
	int cas;
	cin>>cas;
	while(cas--){
		for(int i=0;i<MX;++i){
			adj[i].clear();
			dis[i]=1e9;
			vis[i]=0;
		}
		int n;
		cin>>n;
		for(int i=0;i<n;++i){
			int x;
			cin>>x;
			if(x+i<n){
				adj[x+i].pb(i);
			}
			if(i-x>=0){
				adj[i-x].pb(i);
			}
		}
		queue<int> q;
		q.push(n-1);
		dis[n-1]=0;
		while(q.size()){
			int nw=q.front();
			q.pop();
			for(int i:adj[nw]){
				if(dis[i]>dis[nw]+1){
					dis[i]=dis[nw]+1;
					q.push(i);
				}
			}
		}
		for(int i=0;i<n;++i){
			if(dis[i]==1e9){
				dis[i]=-1;
			}
			cout<<dis[i]<<endl;
		}
	}
	return 0;
}