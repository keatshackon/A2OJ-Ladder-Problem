#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){

	ll t,n,m,k,j,i;
	string s;
	cin>>s;

	string res = "";
	
	for(int i=0;i<s.length();i++){
		if(s[i] == 'h' and res.length() == 0){
			res+='h';
		}else if(s[i] == 'e' and res.length() == 1){
			res+='e';
		}else if(s[i] == 'l' and res.length() == 2){
			res+='l';
		}else if(s[i] == 'l' and res.length() == 3){
			res+='l';
		}else if(s[i] == 'o' and res.length() == 4){
			res+='o';
		}
	}

	if(res == "hello"){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}