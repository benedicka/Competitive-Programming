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
const int MX=1e6+1;
int cnt[MX],a[MX];
int main(){
	// ios::sync_with_stdio(false);cin.tie(NULL);
	freopen("deposits.in","r",stdin);
	freopen("deposits.out","w",stdout);
	int n,m;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cin>>m;
	memset(cnt,0,sizeof(cnt));
	for(int i=0;i<m;++i){
		int x;
		cin>>x;
		cnt[x]++;
	}
	ll ans=0;
	for(int i=0;i<n;++i){
		int nw=a[i];
		for(int j=1;j*j<=a[i];++j){
			if(nw%j==0){
				if(nw/j==j){
					ans+=cnt[j];
				}
				else{
					ans+=cnt[j];
					ans+=cnt[nw/j];
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

