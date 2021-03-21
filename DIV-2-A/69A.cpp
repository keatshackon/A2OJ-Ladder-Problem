#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n,q;
	cin>>n;
	ll a =0 ,b = 0,c = 0;
	while(n--){
		for(int i = 0;i < 3;i++){
			cin>>q;
			if(i == 0){
				a+=q;
			}else if(i == 1){
				b+=q;
			}else{
				c+=q;
			}
		}
	}

	if(a == b and b == c and c == 0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}