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
int main(){
	// ios::sync_with_stdio(false);cin.tie(NULL);
	freopen("key.in","r",stdin);
	freopen("key.out","w",stdout);
	vector<ll> a;
	ll n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		ll x;
		cin>>x;
		a.pb(x);
	}
	sort(a.begin(),a.end());
	vector<ll> ans;
	ll id=0;
	ll sm=0;
	while(m>0){
		ll check=sm+1;
		if(id<n&&a[id]>check){
			m--;
			ans.pb(check);
			sm+=check;
		}
		else if(id>=n){
			m--;
			ans.pb(check);
			sm+=check;
		}
		else{
			if(id<n)sm+=a[id];
			id++;
		}
	}
	for(int i=0;i<(int)ans.size();++i){
		if(i)cout<<" "<<ans[i];
		else{
			cout<<ans[i];
		}
	}
	cout<<endl;
	return 0;
}
