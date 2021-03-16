#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int n,m,t,ans,tmp;
vector < int > a,b;
vector < int > computeLPS(vector <int > pat, int m)
{ 
	vector < int >  res;
    int len = 0;
	res.resize(m); 
    res[0] = 0; 
    int i = 1; 
    while(i<m)
	{ 
        if (pat[i] == pat[len])
		{ 
            len++; 
            res[i] = len; 
            i++; 
        } 
        else
		{ 
            if (len != 0)
			{ 
                len = res[len-1];  
            } 
            else
			{ 
                res[i] = 0; 
                i++; 
            } 
        } 
    } 
	return res;
} 
int KMP(vector < int > pat, vector < int > x)
{ 
  	vector < int > lps = computeLPS(pat,pat.size()); 
    int i = 0;  
    int j = 0; 
    while (i < x.size())
	{ 
        if (pat[j] == x[i])
		{ 
            j++; 
            i++; 
        } 
        if (j==pat.size())
		{ 
            return i-m+1;
        } 
  		else if (i<x.size() && pat[j]!=x[i])
		{ 
            if (j!=0) j = lps[j-1]; 
            else i++; 
        } 
    } 
   return -1;
} 

int main()
{
	scanf("%d",&t); 
	while(t--)
	{
		scanf("%d %d",&n,&m);
		a.clear();
		b.clear();
		for(int i=0;i<n;i++)
		{
			scanf("%d",&tmp);
			a.push_back(tmp);
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d",&tmp);
			b.push_back(tmp);
		}
		printf("%d\n",KMP(b,a));
	}
	return 0;
}