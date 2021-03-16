#include<bits/stdc++.h>
using namespace std;
int t,l;
char a[1000010],b[1000010];
void computeLPS(char *pat, int m, int *res)
{ 
    int len = 0;
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
} 
int KMP(char *pat, char *x)
{ 
    int j = 0, res = 0, lenP = strlen(pat),lenX = strlen(x);
	int lps[lenP+5]; 
	computeLPS(pat,lenP,lps);
    for(int i=0;i<lenX;i++)
	{ 
        while(j && x[i]!=pat[j]) j = lps[j-1];
        if(x[i] == pat[j]) 
		{
			j++;	
		}
        if(j==lenP)
        {
        	break;
		}
    } 
   return 2*lenX-j;
} 


int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%s",a);
		l = strlen(a);
		strcpy(b,a);
		reverse(b,b+l);
		//printf("%s\n%s\n",a,b);
		printf("Case %d: %d\n",tc,KMP(b,a));
	}
	return 0;
}