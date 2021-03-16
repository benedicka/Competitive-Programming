 #include<string>
#include<iostream>
#include<string.h>
using namespace std;
void Swap(int &a , int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
long long Max(long long a,long long b)
{
	if(a>b) return a;
	return b;
}
int main()
{
	char x[110],now,cnt=0;
	bool ok = 0;
	int l;
	scanf("%s",&x);
	l = strlen(x);
	now = x[0];
	for(int i=0;i<l;i++)
	{
		if(now==x[i])
		{
			cnt++;
			if(cnt>=7) ok = 1;
		}
		else
		{
			now = x[i];
			cnt = 1;
		}
	}
	if(cnt>=7) ok = 1;
	printf("%s\n",ok?"YES":"NO");
  	return 0;
}