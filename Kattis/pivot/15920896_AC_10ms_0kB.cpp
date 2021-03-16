#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

typedef long long LL;

int main(){
	int n,ans=0;
	LL premin[100005], premax[100005],x;
	vector <LL> v;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;++i){
		scanf("%lld",&x);
		v.push_back(x);
	}
	
	for(int i=0;i<n;++i){
		if(i){
			premax[i] = max(v[i],premax[i-1]);
		}else{
			premax[i] = v[i];
		}
//		printf("%d ",premax[i]);
	}
//	puts("");
	for(int i=n-1;i>=0;--i){
		if(i==n-1){
			premin[i] = v[i];
		}else{
			premin[i] = min(v[i],premin[i+1]);
		}
//		printf("%d ",premin[i]);
	}
	
	for(int i=1;i<n-1;++i){
		if(v[i]>premax[i-1] && v[i]<premin[i+1]) ans++;
	}
	
	if(v[0]<premin[1]) ans++;
	if(v[n-1]>premax[n-2]) ans++;
	
	printf("%d\n",ans);
	
	return 0;
}