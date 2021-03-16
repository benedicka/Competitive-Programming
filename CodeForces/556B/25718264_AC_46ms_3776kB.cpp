#include<bits/stdc++.h>
using namespace std;
int n,z;
vector < int > x;
bool done (vector < int > a)
{
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=i) return 0;
	}
	return 1;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&z);
    	x.push_back(z);
	}
	for(int i=0;i<10000;i++)
	{
		for(int j=0;j<n;j++)
		{
            if (j%2==0) x[j]=(x[j]+1)%n;
            else x[j]=(x[j]+n-1)% n;
		}
		if(done(x))
		{
			printf("Yes\n");
			return 0;
		}
	}
    printf("No\n");
    return 0;
}