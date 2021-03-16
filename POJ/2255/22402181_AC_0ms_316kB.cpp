#include<stdio.h>
#include<string.h>
char pre[30],in[30];
int len;

void f(char pre[],char in[],int n) 
{ 
    int idxroot=-1;
	for(int i=0;i<n;i++)
	{
		if(in[i]==pre[0])
		{
			idxroot = i;
			break;
		}
	}
    if (idxroot!=0) f(pre+1,in,idxroot); 
    if (idxroot!=n-1) f(pre+idxroot+1,in+idxroot+1,n-idxroot-1); 
    printf("%c",pre[0]);
}
int main()
{
	while(scanf("%s %s",pre,in)!=EOF)
	{
		getchar();
		len = strlen(pre);
		f(pre,in,len);
		printf("\n");
	}
	return 0;
}