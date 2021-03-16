#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")
#define ll long long
#define ld long double
#define ms(a,b) memset(a,b,sizeof(a))
#define endl '\n'
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define mpp(a,b,c) make_pair(a,make_pair(b,c))
#define fi first
#define se second
#define rep(a,b,c) for(int a=b;a<=c;a++)
#define repp(a,b,c) for(int a=b;a>=c;a--)
vector<ll> v;
ll memo[1010][1010];

ll dp(ll left,ll right){
	if(left > right)return 0;
	if(memo[left][right]!=0)return memo[left][right];
	ll maxx = 0;
	//ambil kiri
	if(v[right] > v[left+1]){
		maxx =  max(maxx,dp(left+1,right-1)+v[left]);
	}else{
		maxx =  max(maxx,dp(left+2,right)+v[left]);
	}
	
	//ambil kanan
	if(v[right-1] > v[left]){
		maxx =  max(maxx,dp(left,right-2)+v[right]);
	}else{
		maxx =  max(maxx,dp(left+1,right-1)+v[right]);
	}
	
	return memo[left][right] = maxx;
}

int main(){
/////////////////////////////////////////////
//    freopen("txt.in", "r", stdin);
//    freopen("txt.out", "w", stdout);
/////////////////////////////////////////////
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
/////////////////////////////////////////////
//while(1){
	ll n,tc=1;
	while(cin >> n){
		if(n==0)break;
		ms(memo,0);
		ll a,sum=0,optp1;
		rep(i,1,n){
			cin >> a;
			v.pb(a);
			sum+=a;
		}
		optp1 = dp(0,n-1);
		cout <<  "In game " << tc <<", the greedy strategy might lose by as many as "<<  optp1 - (sum - optp1) << " points." << endl;
		tc++;
		v.clear();
	}
	
//}

	return 0;
}
