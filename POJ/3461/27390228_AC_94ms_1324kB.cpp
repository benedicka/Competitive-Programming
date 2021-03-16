#include <string.h>
#include <stdio.h>
using namespace std;
int t,ans,tmp;
char a[10010],b[1000010];
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
        if(x[i] == pat[j]) j++;
        if(j==lenP)
        {
        	j = lps[j-1];
        	res++;
		}
    } 
   return res;
} 


int main()
{
	scanf("%d",&t); 
	while(t--)
	{
		scanf("%s %s",a,b);
		printf("%d\n",KMP(a,b));
	}
	return 0;
}