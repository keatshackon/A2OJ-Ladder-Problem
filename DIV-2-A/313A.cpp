#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n,k;
	cin>>t;

	if(t >= 0){
		cout<<t;
	}else{
		int a = abs(t % 10);
		int b = abs(t % 100);
		b/=10;

		if(a >= b){
			cout<<t/10;
		}else{
			t = t / 100;
			if(t == 0){
				cout<<(-a);
			}else{
				if(b == 0){
					cout<<t * 10;
				}else{
					cout<<t*10 - a;		
				}
				
			}
			
		}
	}

}