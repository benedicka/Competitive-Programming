#include<bits/stdc++.h>
using namespace std;
int pie[100000];
int main(){
	int a,mx=0;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&pie[i]);
		if(mx<pie[i])mx=pie[i];
	}
	printf("%d\n",mx);
}
