#include<bits/stdc++.h>
using namespace std;
int t,n,k,upp,low;
char x[110];
bool chef = 0,brother = 0;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		upp = 0;
		low = 0;
		chef = 0;
		brother = 0;
		scanf("%d %d",&n,&k);
		scanf("%s",&x);
		for(int i=0;i<n;i++)
		{
			if(isupper(x[i])) upp++;
			else low++;
		}
		if(upp<=k) chef = 1;
		if(low<=k) brother = 1;
		if(brother && chef) printf("both\n");
		else if(brother) printf("brother\n");
		else if(chef) printf("chef\n");
		else printf("none\n");
	}
	return 0;
}