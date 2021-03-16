#include<iostream>
#include<vector>
#define ii pair<int,int>
using namespace std;
int n;
string a,b;

int jmlha = 0;
int jmlhb = 0;

vector<int> ba,ab;
vector<ii> ans;

int main(){
	
	cin>>n;
	cin>>a;
	cin>>b;
	
	for(int i = 0;i<n;i++){
		if(a[i] == 'a') jmlha++;
		if(b[i] == 'a') jmlha++;
		if(a[i] == 'b') jmlhb++;
		if(b[i] == 'b') jmlhb++;
	}
	
	if((jmlha%2 == 1 || jmlhb%2 == 1)){
		//kalo ganjil pasti ga bisa
		printf("-1\n");return 0;
	}
	
	for(int i = 0;i<n;i++){
		if(a[i] == 'b' && b[i] == 'a'){
			ba.push_back(i+1);
		}else if(a[i] == 'a' && b[i] == 'b'){
			ab.push_back(i+1);
		}
	}
	
	int lba = ba.size();
	int lab = ab.size();
	
	int nsw = (lba % 2) && (lab % 2);
	
	nsw += (lba + lab) / 2;
	
	cout << nsw << '\n';
	
	for(int i = 0; i < lba-1; i+= 2) {
		cout << ba[i] << " " << ba[i+1] << '\n';
	}
	
	for(int i = 0; i < lab-1; i+= 2) {
		cout << ab[i] << " " << ab[i+1] << '\n';
	}
	
	if(lba % 2 && lab % 2) {
		cout << ab[lab-1] << " " << ab[lab-1] << '\n';
		cout << ba[lba-1] << " " << ab[lab-1] << '\n';
	}
	
	return 0;
}