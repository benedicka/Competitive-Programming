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
	// ios::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	string a;
	cin>>a;
	map<char,int> cnt;
	int sz=(int)a.size();
	int ans=-1,al=0,ar=0;
	for(int l=0,r=0;r<sz;){
		cnt[a[r]]++;
		if((int)cnt.size()>n){
			while((int)cnt.size()>n){
				cnt[a[l]]--;
				if(cnt[a[l]]==0)cnt.erase(a[l]);
				l++;
			}
		}
		int cur=r-l+1;
		if(cur>ans){
			al=l,ar=r;
			ans=cur;
		}
		r++;
	}
	cout<<al+1<<" "<<ar+1<<endl;
	return 0;
}
