#include <bits/stdc++.h>
using namespace std;
char x[100010],y[100010];
int ans,t,n,m,k;
void computeLPSArray(char* pat, int x, int* lps)
{ 
    int len = 0; 
    lps[0] = 0; 
    int i = 1; 
    while(i<x)
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
    int lenPat = strlen(pat); 
    int lenTxt = strlen(txt); 
    int lps[lenPat]; 
  	computeLPSArray(pat,lenPat,lps); 
    int i = 0;  
    int j = 0; 
    while (i < lenTxt)
	{ 
        if (pat[j] == txt[i])
		{ 
            j++; 
            i++; 
        } 
        if (j==lenPat)
		{ 
            ans++;
			j = lps[j - 1]; 
        } 
  		else if (i<lenTxt && pat[j]!=txt[i])
		{ 
            if (j != 0) j = lps[j - 1]; 
            else i++; 
        } 
    } 
} 

int main()
{
	scanf ("%d", &t);
	for (int i = 0; i<t; i++)
	{
		scanf ("%d %d %d",&n,&m,&k);
		scanf ("%s",&x);
		scanf ("%s",&y);
		y[k] = '\0';
		ans = 0;
		KMP(y,x);
		printf("%d\n",!ans?-1:ans);
	}
	
	return 0;
}