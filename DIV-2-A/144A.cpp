#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n,m,j,k,q,l;
	cin>>t;
	vector<int> v;
	while(t--){
		cin>>q;
		v.push_back(q);
	}	

	std::vector<int> temp(v.begin(), v.end());

	sort(temp.begin(), temp.end());

	int small = temp[0];
	int large = temp[temp.size()-1];
	int i = 0;
	l=0;
	k=0;
	while(i < v.size()){
		if(v[i] == large){
			k = i;
			break;
		}
		i++;
	}
	i = v.size()-1;
	while(i >=0 ){
		if(v[i] == small){
			l = i;
			break;
		}
		i--;
	}
	//  
	if(k>l){
		cout<<(v.size()-1 - l) + (k - 0) -1;
	}else{
		cout<<(v.size()-1 - l) + (k - 0);
	}

	return 0;
}