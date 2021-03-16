#include<bits/stdc++.h>
using namespace std;
long long n,s,l;
void de(char z)
{
	bool bsr = 0;
	if(isupper(z)) bsr = 1;
	long long tmp = tolower(z)-'a';
	z = (tmp-s)%26;
	if(z<0) z+=26;
	printf("%c",bsr?toupper(z+'a'):z+'a');
}
int main()
{

	char x[1010];
	scanf("%lld %lld",&n,&s); getchar();
	for(int i=0;i<n;i++)
	{
		scanf("%[^\n]s%*c",&x);getchar();
		l = strlen(x);
		for(int j=0;j<l;j++)
		{
			if(isalpha(x[j])) de(x[j]);
			else printf("%c",x[j]);
		}
		printf("\n");
	}
	return 0;
}