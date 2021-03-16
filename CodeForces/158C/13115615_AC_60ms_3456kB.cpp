#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int n,jum;
	string input,a,kata;
	vector < string > x;
	cin>>n;
	while(n--)
	{
		cin>>input;
		if(input=="pwd")
		{
			cout<<'/';
			jum =(int) x.size();
			//printf("jum = %d\n",jum);
			for(int i=0;i<jum;i++)
			{
				cout<<x[i]<<'/';
				//printf(" %d",i);
			}
			cout<<'\n';
		}
		else
		{
			cin>>a;
			kata.clear();
			for(int i=0;i<300;i++)
			{
				if(a[i]=='\0')  break;
				else if(a[i]=='/' && i==0) x.clear();
				else if(a[i]=='.' && a[i+1]=='.')
				{
					x.pop_back();
				}
				else if(a[i]!='\0' && a[i]!='/' && a[i]!='.')
				{
					kata+=a[i];
				//	cout<<kata<<endl;
				}
				
				if(a[i]=='/'  && kata[0]!='\0')
				{
					kata[(int)kata.size()+1] = '\0';
					x.push_back(kata);
					kata.clear();
				}
			}
			if(!kata.empty())
			{
				kata[(int)kata.size()+1] = '\0';
				x.push_back(kata);
				kata.clear();
			}
			
		}
	}
	
	return 0;
}