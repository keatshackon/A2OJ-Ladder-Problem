#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n,m;
	cin>>t;
	vector<int> v;
	ll sum = 0;
	while(t--){
		cin>>m;
		sum+=m;
		v.push_back(m);
	}

	sort(v.begin(), v.end());
	ll  sub = 0;
	int cnt = 0;
	for(int i = v.size() - 1;i >= 0;i--){

		sub = sub + v[i];
		sum = sum - v[i];

		if(sub <= sum){
			cnt++;
		}else{
			cnt++;
			break;
		}
	}
	cout<<cnt;

}