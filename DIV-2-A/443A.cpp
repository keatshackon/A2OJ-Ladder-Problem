#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n,m;
	string s;
	getline(cin,s);

	set<int>se;

	for(auto q:s){
		if(q>='a' and q<='z'){
			se.insert(q);
		}
	}

	cout<<se.size();
}