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
const int MX=2e5+1;
vector<int> adj[MX];
int main(){
	ios::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		int a,b;
		cin>>a>>b;
		adj[b].pb(a);
	}
	int mk=0;
	for(int i=0;i<MX;++i){
		if(adj[i].empty())continue;
		for(int j=1;j<(int)adj[i].size();++j){
			if(adj[i][j]<adj[i][j-1]){
				mk++;
			}
		}
	}
	if(mk==0){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}
