#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		while(n--)
		{
			printf("%c",n%26+'a');
		}
		printf("\n");
	}
	return 0;
}