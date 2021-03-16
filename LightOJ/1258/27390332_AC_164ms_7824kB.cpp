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
    int i = 0, j = 0, res = 0, lenP = strlen(pat),lenX = strlen(x),len=0;
	int lps[lenP+5]; 
	computeLPS(pat,lenP,lps);
    while (i < lenX)
	{ 
        if (pat[j] == x[i])
		{ 
            j++; 
            i++;
            res = max(res,j);
        } 
        if (j==lenP)
		{ 
			break;
			j = lps[j-1];
        } 
  		else if (i<lenX && pat[j]!=x[i])
		{ 
            if (j!=0) j = lps[j-1]; 
            else i++; 
        } 
    } 
   	return (2*lenX-j);
} 

int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%s",a);
		l = strlen(a);
		for(int i=0;i<l;i++)
		{
			b[i] = a[l-1-i];
		}
	//	printf("%s %s\n",a,b);
		printf("Case %d: %d\n",tc,KMP(b,a));
		for(int i=0;i<l;i++)
		{
			b[i] = '\0';
		}
	}
	return 0;
}