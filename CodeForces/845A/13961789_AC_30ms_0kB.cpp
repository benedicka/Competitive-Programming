#include<stdio.h>
#include<algorithm>
using namespace std;
int n,a[210],jum;
bool cek()
{
	if(a[n/2]>a[n/2-1]) return 1;
	else return 0;
}
int main()
{
	scanf("%d",&n);
	n*=2;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	if(!cek()) printf("NO\n");
	else printf("YES\n");
	return 0; 
}