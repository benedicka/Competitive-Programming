#include<stdio.h>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
char input[1000010];
int l,r,a,b,n,tc=1;
char tmp;
bool ok;
int main()
{
	while(scanf("%s",&input)!=EOF)
	{
		scanf("%d",&n);
		cout<<"Case "<<tc<<":"<<endl;
		while(n--)
		{
			scanf("%d %d",&a,&b);
			
			l = min(a,b);
			r = max(a,b);
			ok = 1;
			tmp = input[l];
			for(int i=l;i<=r;i++)
			{
				if(tmp!=input[i])
				{
					ok = 0;
					break;
				}
			}
			if(!ok) cout<<"No"<<endl;
			else cout<<"Yes"<<endl;	
		}
		tc++;
	}
	return 0;
}