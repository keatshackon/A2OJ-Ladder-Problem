#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main(){

	ll t,m,n,k,l,j,i;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()>10){
			string temp = "";
			temp+=s[0];
			int te = s.length()-2;
			temp+=to_string(te);
			temp+=s[s.length()-1];
			cout<<temp<<"\n";
		}else{
			cout<<s<<"\n";
		}

	}
}