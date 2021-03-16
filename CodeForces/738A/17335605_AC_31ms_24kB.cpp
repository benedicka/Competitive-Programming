#include<bits/stdc++.h>
using namespace std;
int n;
char s[200];
int main()
{
	scanf("%d",&n);
	scanf("%s",&s);
	for(int i=0;i<n;i++)
	{
		if(s[i]=='o' && s[i+1]=='g' && s[i+2]=='o')
		{
			printf("***");
			i+=3;
			while(s[i]=='g' && s[i+1]=='o') i+=2;
			i-=1;
		}
		else printf("%c",s[i]);
	}
	printf("\n");
	return 0;
}