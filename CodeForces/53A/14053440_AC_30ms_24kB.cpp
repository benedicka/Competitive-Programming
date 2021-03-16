#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<utility>
#include<algorithm>
#include<string>
#include<set>
#include<iostream>;
using namespace std;
bool ubah = 0,ok;
int n,l,l2,z,a;
set < string > ans;
char x[110],tmp[110],input[110];
int main()
{
	scanf("%s",&x);
	a = strlen(x);
	scanf("%d",&n);
	while(n--)
	{
		//printf("tmp = %s\n",tmp);
		scanf("%s",&input);
		l = strlen(input);
		if(l<a) continue;
		else
		{
			ok = 1;
			for(int i=0;i<a;i++)
			{
				if(x[i]!=input[i])
				{
					ok = 0;
					break;
				}
			}
			if(ok) ans.insert(input);
		}
	}
	set<string>::iterator it = ans.begin();
	if(ans.empty()) printf("%s\n",x);
	else cout<<*it<<endl;
	return 0;
}