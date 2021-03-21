#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll n,q;
	cin>>n;
	vector<int> v;
	while(n--){
		cin>>q;
		v.push_back(q);
	}

	sort(v.begin(), v.end());

	int cnt = 0,cmp = 0;
	for(int i = 0;i < v.size();i++){
		if(v[i] >= cmp){
			cnt++;
			cmp += v[i];
		}
		
	}

	cout<<cnt;
}