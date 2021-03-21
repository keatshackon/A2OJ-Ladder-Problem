#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll i,j,k,l,q;

	for(i = 0;i < 5;i++){
		for(j = 0;j < 5;j++){
			cin>>q;
			if(q == 1){
				k = i;
				l = j;
			}
		}
	}

	cout<<abs(2-k) + abs(2-l);
}