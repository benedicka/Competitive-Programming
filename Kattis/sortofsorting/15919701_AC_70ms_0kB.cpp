#include<bits/stdc++.h>
using namespace std;
string x;
pair < string , int > input[1010];
bool ok = 0;
int n;
bool cmp (pair < string , int > x, pair < string , int > y)
{
	string a,b;
	a = x.first;
	b = y.first;
   	if(a[0]==b[0])
	{
		if(a[1]!=b[1]) return (a[1]<b[1]);
		else return(x.second<y.second);
	}
	else
	{
		return(a[0]<b[0]);
	}	
	
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        if(ok) cout<<endl;
		ok = 1;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            input[i] = make_pair(x,i);
		}
        sort(input,input+n,cmp);
        for(int i=0;i<n;i++)
        {
            cout<<input[i].first<<endl;
        }
    }
    return 0;
}