#include<iostream>
#include<map>
#include<string>

using namespace std;
int main (){
	long long n;
	string x;
	map <string,long long> m;
	cin >> n;
	while (n --){
		cin >> x ;
		if (m.find(x) == m.end()){
			cout << 0 << endl;
		}else{
			cout << m[x] << endl;
		}
		string temp = "";
		for (long long i=0;i<x.length();i++){
			temp += x[i];
			m[temp]++;
		}
	}
	
	
	return 0;
}