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
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int ans=0;
	sort(a.rbegin(),a.rend());
	for(int i=0;i<k;++i){
		ans+=a[i];
	}
	cout<<ans<<endl;
	return 0;
}
