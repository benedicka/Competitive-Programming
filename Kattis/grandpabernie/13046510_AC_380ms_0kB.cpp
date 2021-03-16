#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year;
	string place;
	vector <int> yr;
	map < string , vector<int> > list;
	map < string , int > cek;
	int n,q;
	cin>>n;
	while(n--)
	{
		cin>>place;
		cin>>year;
		list[place].push_back(year);
	}
	cin>>q;
	while(q--)
	{
		cin>>place;
		cin>>year;
		if(cek[place]==0)
		{
			sort(list[place].begin(),list[place].end());
			cek[place] = 1;
		}
		cout<<list[place][year-1]<<endl;
	}
	
	
	
	return 0;
}