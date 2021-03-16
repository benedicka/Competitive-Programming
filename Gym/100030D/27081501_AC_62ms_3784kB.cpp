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
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	ios::sync_with_stdio(false);cin.tie(NULL);
	ll a,b;
	cin>>a>>b;
	ll now=1;
	ll ans=0;
	for(ans=0;;++ans){
		if(now>=a)break;
		ll add=now*b;
		now+=add;
	}
	cout<<ans<<endl;
	return 0;
}

