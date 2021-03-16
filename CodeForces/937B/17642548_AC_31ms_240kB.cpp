#include<bits/stdc++.h>
using namespace std;
int p,y;
bool ok;
bool cek(int n)
{
	for(int i=2;i<=p;i++)
	{
		if(i*i>n) break;
		if(n%i==0) return 0;
	}
	return 1;
}
int main()
{
	scanf("%d %d",&p,&y);
	for(int i=y;i>p;i--)
	{
		if(cek(i))
		{
			printf("%d\n",i);
			ok = 1;
			break;
		}
	}
	if(!ok) printf("-1\n");
	return 0;
}