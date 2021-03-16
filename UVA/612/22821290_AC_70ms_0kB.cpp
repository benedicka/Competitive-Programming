#include<bits/stdc++.h>
using namespace std;
int n,m,t,a[110],ori[110];
char x[110][110];

int main()
{
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++)
	{
		scanf("%d %d",&m,&n);
		for(int i=0;i<n;i++)
		{
			scanf("%s",&x[i]);
			a[i] = 0;
			ori[i] = i;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				for(int k=j+1;k<m;k++)
				{
					if(x[i][j]>x[i][k]) a[i]++;
				}
			}
		//	printf("%s %d\n",x[i],a[i]);
		}
		for(int i=0;i<n;i++)
		{
			char tmp[110];
			int tmp_i;
			int target=i;
			for(int j=i+1;j<n;j++)
			{
				if(a[target]>a[j])
				{
					target = j;
				}
				else if(a[target]==a[j] && ori[j]<ori[target])
				{
					target = j;
				}
			}
			strcpy(tmp,x[i]);
			strcpy(x[i],x[target]);
			strcpy(x[target],tmp);
			tmp_i = a[i];
			a[i] = a[target];
			a[target] = tmp_i;
			tmp_i = ori[i];
			ori[i] = ori[target];
			ori[target] = tmp_i;
		}
		if(tc) printf("\n");
		for(int i=0;i<n;i++)
		{
			printf("%s\n",x[i]);
		}
		
	}
	return 0;
}