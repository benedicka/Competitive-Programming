#include<bits/stdc++.h>
using namespace std;
char x[110];
int flor[110];
int n,m,a,b,y;
int main()
{

	scanf("%d %d",&n,&m);
	a = 1;
	b = m;
	flor[1] = -1;
	for(int i=0;i<n;i++)
	{
		scanf("%d %s",&y,&x);
		if(x[0]=='S') 
		{
			a = max(a,y);
		}
		else
		{
			b = min(b,y);
		} 
	}
	printf("%d %d\n",a+1,b-1);
	return 0;
}