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
	int n;
	cin>>n;
	vector<ll> a(2*n);
	ll sum=0;
	for(int i=0;i<2*n;++i){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a.begin(),a.end());
	vector<ll> ans;
	vector<ll> ar,out;
	ll mx=-1;
	for(int i=0;i<2*n-1;++i){
		ar.pb(a[i]);
	}
	do{
		ans.clear();ans.resize(2*n);
		ans[0]=a[2*n-1];
//		ans[n]=a[2*n-2];
		for(int i=1,id=0;i<2*n;++i){
//			if(i==n)continue;
			ans[i]=ar[id];
			id++;
		}
		ll nw=0;
		ll mn=1e9;
		for(int i=0;i<n;++i){
			nw=0;
			for(int j=i;j<i+n;++j){
				nw+=ans[j];
			}
			ll s2=sum-nw;
			if(s2>nw)swap(s2,nw);
			if(s2<mn){
				mn=s2;
			}
		}
		if(mn>mx){
			mx=mn;
			out=ans;
		}
		mx=max(mx,mn);
	}
	while(next_permutation(ar.begin(),ar.end()));
	for(int i=0;i<2*n;++i){
		if(i)cout<<" "<<out[i];
		else cout<<out[i];
	}cout<<endl;
	return 0;
}
