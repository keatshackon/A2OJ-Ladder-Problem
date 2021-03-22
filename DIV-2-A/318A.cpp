

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	ll t,n,m,k,l;
	cin>>n>>k;

	m = n % 2 == 0 ? (n/2) : (n/2 + 1);

	if(k > m){
		ll i = 2;
		k = k - m;
		k--;
		while(k--){
			i+=2;
		} 
		cout<<i;

	}else{
		ll i = 1;
		k--;
		while(k--){
			i+=2;
		}
		cout<<i;
	}
}