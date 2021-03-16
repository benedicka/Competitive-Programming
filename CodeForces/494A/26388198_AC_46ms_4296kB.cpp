#include<bits/stdc++.h>
using namespace std;
char str[100010];
vector < int > ans;
int sum,len;
bool ok = 1;
int main()
{
	scanf("%s",str);
	len = strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]=='(') 
		{
			sum+=1;
		}
		else if(str[i]==')') 
		{
			sum-=1;
		}
		else
		{
			sum-=1;
			ans.push_back(1);
		}
		if(sum<0)
		{
			ok = 0;
			break;
		}
	}
	//printf("%d\n",sum);
	if(ok)
	{
		ans[ans.size()-1]+=sum;
		int id = 0;
		sum = 0;
		for(int i=0;i<len;i++)
		{
			
			if(str[i]=='(') 
			{
				sum+=1;
			}
			else if(str[i]==')') 
			{
				sum-=1;
			}
			else
			{
				sum-=ans[id++];
			}
			if(sum<0)
			{
				ok = 0;
				break;
			}
		}
	}
	
	if(sum!=0) ok = 0;
	if(ok)
	{
		for(int i=0;i<ans.size();i++)
		{
			printf("%d\n",ans[i]);
		}
	}
	else printf("-1\n");
	return 0;
}