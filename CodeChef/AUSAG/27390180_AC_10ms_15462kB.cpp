#include <bits/stdc++.h>
using namespace std;
char y[100010],tmp[100010];
int ans,t,n,m,idx;
string x;
void computeLPSArray(char* pat, int m, int* lps)
{ 
    int len = 0; 
    lps[0] = 0; 
    int i = 1; 
    while(i<m)
	{ 
        if (pat[i] == pat[len])
		{ 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else
		{ 
            if (len != 0)
			{ 
                len = lps[len-1];  
            } 
            else
			{ 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
} 
void KMP(char* pat, char* txt)
{ 
    int lenPat = strlen(pat), lenTxt = strlen(txt) ,lps[lenPat], j =0; 
  	computeLPSArray(pat,lenPat,lps);
   	for(int i=0;i<lenTxt;i++)
	{ 
        while(j && txt[i]!=pat[j]) j = lps[j-1];
        if(txt[i] == pat[j]) j++;
        if(j==lenPat)
        {
        	j = lps[j-1];
        	ans++;
		}
    } 
} 

int main()
{
	scanf("%d",&t); 
	for (int tc=1;tc<=t;tc++)
	{
		tmp[0] = '\0';
		getline(cin,x);
		getline(cin,x);
		scanf("%s",&y);
		int lem = x.size();
		idx = 0;
		for(int i=0;i<lem;i++)
		{
			if(x[i]!=' ')tmp[idx++] = x[i];
		}
		tmp[lem] = '\0';
		//printf("x:%s\ny:%s\n",tmp,y);
		ans = 0;
		KMP(y,tmp);
		printf("Case %d: %d\n",tc,ans);
	}
	
	return 0;
}