#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n,m,j;
	cin>>t>>n;
	vector<int> v;
	while(n--){
		cin>>m;
		v.push_back(m);
	}	
	sort(v.begin(), v.end());

	int small = INT_MAX;
	t--;
	int i = 0;
	while(i < v.size()){
		if(i+t < v.size() and abs(v[i] - v[i+t]) < small){
			small = abs(v[i] - v[i+t]);
		}
		i++;
	}

	cout<<small;

}