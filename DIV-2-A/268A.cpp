#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n,m,j,k,l;
	cin>>t;
	vector<pair<int,int>> v;
	while(t--){
		cin>>k>>l;
		v.push_back(make_pair(k,l));
	}

	int ans = 0;
	for(int i = 0;i < v.size();i++){
		for(int j = 0;j < v.size();j++){
			if(j != i and v[i].first == v[j].second){
				ans++;
			}
		}
		
	}
	cout<<ans<<"\n";

	return 0;
}