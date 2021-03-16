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
	ios::sync_with_stdio(false);cin.tie(NULL);
	ll n;
	cin>>n;
	string in;
	cin>>in;
	vector<ll> a;
	for(char i:in){
		a.pb((ll)i);
	}
	vector<ll> ans;
	for(int i=0;i<(1<<n);++i){
		ll sm=0;
		for(int j=0;j<n;++j){
			if((i&(1<<j))!=0){
				sm+=a[j];
			}
		}
		ans.pb(sm);
	}
	sort(ans.begin(),ans.end());
	for(int i=0;i<(int)ans.size();++i){
		if(i){
			cout<<" "<<ans[i];
		}
		else{
			cout<<ans[i];
		}
	}cout<<endl;
	return 0;
}
