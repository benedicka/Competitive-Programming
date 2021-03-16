#include<bits/stdc++.h>
using namespace std;

long long data[1000010];

void func(){
	long long ban=1,tam=2;
	for(int i=1;i<=1000005;i++){
		data[i]=ban;
		ban+=tam;
		tam++;
	}
}

int main(){
	int a;
	func();
	int tc;
	scanf("%d",&tc);
	while(tc--){
		scanf("%d",&a);
		long long has=data[a]*3;
		has-=a;
		has%=1000007;
		printf("%lld\n",has);	
	}
	
	return 0;
}