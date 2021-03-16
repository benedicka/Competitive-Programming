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
	freopen("holes.in","r",stdin);
	freopen("holes.out","w",stdout);
	int h;
	cin>>h;
	if(h==0){
		cout<<1<<endl;
		return 0;
	}
	if(h==1){
		cout<<0<<endl;
		return 0;
	}
	int e=h/2;
	int f=h%2;
	if(f){
		cout<<4;
	}
	for(int i=0;i<e;++i){
		cout<<8;
	}
	cout<<endl;
	return 0;
}

