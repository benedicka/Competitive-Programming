#include<stdio.h>
#include<map>
using namespace std;
map <int,bool>mp;
void pre()
{
	int sudut;
	for(int i=0;i<=12;i++)
	{
		for(int j=0;j<=59;j++)
		{
			sudut = i*30+(j/60)*30-j*6;
			if(sudut<0) sudut*=-1;
			if(sudut>180) sudut = 360-sudut;
			//printf("%d\n",sudut);
			mp[sudut] = 1;
		}
	}
}
int main()
{
	pre();
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		//printf("%d\n",mp[a]);
		if(mp[a]) printf("Y\n");
		else printf("N\n");
	}
	return 0;
}