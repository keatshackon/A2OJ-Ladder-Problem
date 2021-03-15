#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	ll t,m,n,i,j,k,l;
	
	string s1,s2;
	cin>>s1>>s2;

	int f = 0;

	for(int i = 0;i < s1.length();i++){
		
		if(s1[i]>='A' and s1[i]<='Z'){
			s1[i] = s1[i] + 32;
		}

		if(s2[i]>='A' and s2[i]<='Z'){
			s2[i] = s2[i] + 32;
		}

		if(s1[i] > s2[i]){
			cout<<1;
			f = 1;
			break;
		}else if(s1[i] < s2[i]){
			cout<<-1;
			f = 1;
			break;
		}
	}

	if(f == 0){
		cout<<0;
	}

	return 0;


}