#include<bits/stdc++.h>
using namespace std;
int n,cnt1,cnt2;
char home[10],a[10],b[10],x[10];
int main()
{
	scanf("%d",&n);
	scanf("%s",&home);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&x);
		for(int i=0;i<3;i++)
		{
			a[i] = x[i];
		}
		a[3] = '\0';
		for(int i=5;i<8;i++)
		{
			b[i-5] = x[i];
		}
		b[3] = '\0';
		if(strcmp(a,home)==0) cnt1++;
		else if(strcmp(b,home)==0) cnt2++;
	}
	if(cnt1<=cnt2) printf("home\n");
	else printf("contest\n");
	return 0;
}