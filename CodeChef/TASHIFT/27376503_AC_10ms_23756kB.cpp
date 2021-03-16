#include<bits/stdc++.h>
using namespace std;
int n;
char a[2000010],b[2000010];
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
		//printf("%c %c\n",pat[j],x[i]);
        if (pat[j] == x[i])
		{ 
            j++; 
            i++; 
           // printf("%d %d\n",j,len);
            if(j>len)
            {
            	len = j;
            	res = i-j;
			}
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
   	return res;
} 

int main()
{
	scanf("%d",&n);
	scanf("%s %s",a,b);
	for(int i=n;i<2*n;i++)
	{
		b[i] = b[i%n];
	}
	printf("%d\n",KMP(a,b));
	return 0;
}