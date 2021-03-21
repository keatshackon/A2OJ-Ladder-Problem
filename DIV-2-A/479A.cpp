#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll a,b,c;
	cin>>a>>b>>c;

	int l = max(max(a,b),c);
	int k = min(min(a,b),c);
	int j = (a+b+c)- (l+k);

	if(k == 1){
		if(l == 1 and j == 1){
			cout<<(l+k+j);
		}else{
			cout<<(j+k)*l;	
		}
		
	}else{
		cout<<l*k*j;
	}
}