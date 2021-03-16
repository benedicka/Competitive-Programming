#include<stdio.h>
#include<stack>
using namespace std;
int main()
{
	bool ok;
	int t,n,s,a,z;
	stack < int > x;
	scanf("%d",&t);
	while(t--)
	{
		ok = 1;
		scanf("%d %d",&n,&s);
		if((n%2==0 && s%2!=0) || (n!=1 && s==0)|| n*9<s) printf("-1\n");
		else
		{
			z = 9;
			a = n/2;
			
			for(int i=0;i<a;i++)
			{
				for(int j=z;j>=0;j--)
				{
					if(i==0 && j==0)
					{
						ok = 0;
						break;
					}
					if(s>=2*j)
					{
						z = j;
						printf("%d",j);
						x.push(j);
						s-=2*j;
						break;
					}
				}
				if(ok==0) break;
			}
			if(ok==0) printf("-1");
			if(ok==1 && n%2!=0) printf("%d",s);
			while(!x.empty())
			{
				if(ok==1) printf("%d",x.top());	
				x.pop();
			}
			printf("\n");	
		}
	}
	return 0;
}