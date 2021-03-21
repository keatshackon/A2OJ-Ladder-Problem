#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n,m,j;
	ll q = 0;

	cin>>n;
	cin>>m;
	std::vector<int> v;
	std::vector<int> v1;
	while(m--){
		cin>>q;
		v.push_back(q);
	}
	sort(v.begin(), v.end());
	cin>>j;
	while(j--){
		cin>>q;
		v1.push_back(q);
	}
	sort(v1.begin(), v1.end());

	if(v[0] == 1){
		if(v[v.size()-1] >= v1[0]){

			if(v[v.size()-1] >= n){
				cout<<"Oh, my keyboard!";
			}else if(v1[v1.size()-1] >= n){
				cout<<"I become the guy.";
			}else{
				cout<<"Oh, my keyboard!";
			}
		}else{
			cout<<"Oh, my keyboard!";
		}
	}else if(v1[0] == 1){
		if(v1[v1.size()-1] >= v[0] and v1[v1.size()-1] < n){
			if(v[v.size()-1] >= n){
				cout<<"I become the guy.";
			}else{
				cout<<"Oh, my keyboard!";
			}
		}else{
			cout<<"Oh, my keyboard!";
		}
	}

	return 0;



}