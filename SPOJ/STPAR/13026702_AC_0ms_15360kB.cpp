#include<stack>
#include<stdio.h>
using namespace std;
stack <int> main_road1;
stack <int> main_road2;
stack <int> side_road;
bool naik,turun;

void kosong()
{
	while(!main_road1.empty())
	{
		main_road1.pop();
	}
	while(!main_road2.empty())
	{
		main_road2.pop();
	}
	while(!side_road.empty())
	{
		side_road.pop();
	}
}
int main()
{

	int n,k,input[1000],truk;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		naik = 1;
		turun = 1;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&input[i]);
		}
		for(int i=n-1;i>=0;i--)
		{
			main_road1.push(input[i]);
			main_road2.push(input[i]);
		}
		k = 1;
		while(!main_road1.empty())
		{
			if(main_road1.top()==k)
			{
				main_road1.pop();
				k++;
			}
			else if(!side_road.empty() && side_road.top()==k)
			{
				side_road.pop();
				k++;
			}
			else
			{
				truk = main_road1.top();
				side_road.push(truk);
				main_road1.pop();
			}
		}

		while(k<=n)
		{
			if(!side_road.empty())
			{
				if(side_road.top()==k)
				{
					side_road.pop();
					k++;
				}
				else
				{
					naik = 0;
					break;
				}
			}
		}
		if(naik==0)
		{
					k = n;
			while(!main_road2.empty())
			{
				if(main_road2.top()==k)
				{
					main_road2.pop();
					k--;
				}
				else if(!side_road.empty() && side_road.top()==k)
				{
					side_road.pop();
					k--;
				}
				else
				{
					truk = main_road2.top();
					side_road.push(truk);
					main_road2.pop();
				}
			}
	
			while(k>=1)
			{
				if(!side_road.empty())
				{
					if(side_road.top()==k)
					{
						side_road.pop();
						k--;
					}
					else
					{
						turun = 0;
						break;
					}
				}
			}
		}
		kosong();
	
	
	
	
	
		if(naik==1 || turun==1) printf("yes\n");
		else printf("no\n");
		kosong();
	}
	return 0;
}