#include<bits/stdc++.h>
using namespace std;
int ok,t,lx,ly;
string x,y,tmp;
int beda()
{
	int x = 0,id=0;
	for(int i=0;i<ly;i++)
	{
		if(tmp[id]!=y[i])
		{
			x++;
		}
		else id++;
	}
	return x;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ok = -1;
		cin>>x>>y;
		lx = x.size();
		ly = y.size();
		for(int i=0;i<lx;i++)
		{
			tmp.clear();
			for(int j=i;j<i+ly;j++)
			{
				if(j<lx)tmp+=x[j];
				
			}
			//cout<<tmp<<endl;
			if(beda()==0) 
			{
					
				ok = 1;
				break;
			}
			else if(beda()==1)
			{
				ok = 0;
			}
		}
		if(ok==1) printf("good\n");
		else if(ok==0) printf("almost good\n");
		else printf("none\n");
	}	
	return 0;
}