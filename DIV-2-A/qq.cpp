#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n,m,q;

	map<int,int>ma;
	cin>>n;
	int check;
	while(n--){
		cin>>q;

		if(q == 1){
			cin>>m;
			ma[m]++;
		}else if(q == 2){
			int large = 0;
			cout<<(*ma.rbegin()).first;
			
		}else{
			cin>>check;
			if(ma.count(check) != 0){
				ma[check]--;
			}

			if(ma[y] == -1){
				ma.erase();
			}
		}
	}
	return 0;
}