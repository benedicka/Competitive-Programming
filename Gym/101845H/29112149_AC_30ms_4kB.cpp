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

int main(){
/////////////////////////////////////////////
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
/////////////////////////////////////////////
//while(1){
	ll n,kabisat=0;
	cin >> n;
	rep(i,0,n){
		if((i+1867)%4==0){
			if((i+1867)%400==0){
				kabisat++;
				continue;
			}
			if((i+1867)%100==0)continue;
			kabisat++;
		}
	}
	n+=kabisat;
	ll sisa = n%7;
	if(sisa==0){
		cout << "Sunday";	
	}else if(sisa == 1){
		cout << "Monday";
	}else if(sisa == 2){
		cout << "Tuesday";
	}else if(sisa == 3){
		cout << "Wednesday";
	}else if(sisa == 4){
		cout << "Thursday";
	}else if(sisa == 5){
		cout << "Friday";
	}else{
		cout << "Saturday";
	}
	cout << endl;
		
//}
	return 0;
}