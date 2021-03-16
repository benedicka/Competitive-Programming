#include<map>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	bool ada[27];
	char input[1010],x[1010];
	map < string , int > m;
	int ans=0,n,s,c;
	scanf("%d",&n);
	while(n--)
	{
		c = 0;
		x[0] = '\0';
		for(int i=0;i<27;i++)
		{
			ada[i] = 0;
		}
		scanf("%s",input);
		s  = strlen(input);
		for(int i=0;i<s;i++)
		{
			if(ada[input[i]-'a']==0)
			{
				ada[input[i]-'a'] = 1;
				x[c] = input[i]; 
				c++;
			}
		}
		x[c] = '\0';
		sort(x,x+c);
	//	printf("%s\n",x);
		if(m[x]==0)
		{
			ans++;
			m[x]++;
		}
		input[0] = '\0';
	}
	
	printf("%d\n",ans);
	return 0;
}