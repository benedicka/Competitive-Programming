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
bool valid(int x)
{
	bool ada[11] ={0};
	while(x>0)
	{
		if(ada[x%10]) return 0;
		ada[x%10] = 1;
		x/=10;
	}
	return 1;
}
int getans(int x)
{
	while(!valid(x)) x++;
	return x;
}
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d\n",getans(x+1));
  	return 0;
}