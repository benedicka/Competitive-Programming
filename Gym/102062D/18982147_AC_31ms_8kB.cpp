#include <bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

int main(){
	int tc,x;
	
	sf("%d",&tc);
	for(int i=1;i<=tc;++i){
		sf("%d",&x);
		pf("Case %d: ",i);
		if(x/10 == 0){
			pf("%d\n",x);
		}else{
			pf("%d",x);
			x /= 10;
			while(x > 0){
				pf("%d",x%10);
				x /= 10;
			}
			pf("\n");
		}
	}
	
	return 0;
}
