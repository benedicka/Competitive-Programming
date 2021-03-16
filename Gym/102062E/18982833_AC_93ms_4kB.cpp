#include <bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

typedef long long LL;

int tc;
LL x,d,pangkat[70];

void pre(){
	pangkat[0] = 1;
	pangkat[1] = 2;
	
	for(int i=2;i<=62;++i){
		pangkat[i] = pangkat[i-1]*2;
	}
}

int main(){
	pre();
	
	sf("%d",&tc);
	for(int t=1;t<=tc;++t){
		sf("%lld %lld",&d,&x);
		
		pf("Case %d: ",t);
		if(x >= pangkat[d+1]){
			pf("NO\n");
		}else{
			int cnt=0;
			LL sum=0;
			while(1){
				if(sum == x) break;
				if(sum > x){
					sum -= pangkat[d];
				}else{
					sum += pangkat[d];
				}
				d--;
				cnt++;
			}
			pf("YES %d\n",cnt);
		}
	}
	
	return 0;
}
