#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	ll t,m,n,i,j,k,l,q;
	
	cin>>n;

	if(n==2 or n == 1){
		cout<<"NO";
	}else{
		if(n % 2 == 0){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}

	
	return 0;
}