#include<bits/stdc++.h>
using namespace std;
long long data[400000];

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&data[i]);
	}
	sort(data,data+a);
	long long has=0;
	long long tam=2;
	for(int i=0;i<a-1;i++){
		has+=tam*data[i];
		tam++;
	}
	has+=data[a-1]*(tam-1);
	printf("%lld\n",has);
}