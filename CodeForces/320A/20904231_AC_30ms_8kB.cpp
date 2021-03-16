#include<bits/stdc++.h>
using namespace std;
int n;
bool cek(int x)
{
	if(x==0) return 1;
	if(x%10==1) return cek(x/10);
	if(x%100==14) return cek(x/100);
	if(x%1000==144) return cek(x/1000);
	return 0;
}
int main()
{
	
	scanf("%d",&n);
	printf("%s\n",cek(n)?"YES":"NO");
	return 0;
}