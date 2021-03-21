#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	ll t,n;
	string s;
	cin>>s;

	string res = "";
	string ans = "";
	for(int i = 0;i < s.length();i++){
		if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B'){
			i+=2;
			if(res != ""){
				ans+=res;
				ans+=" ";
				res = "";
			}
		}else{
			res+=s[i];
		}
	}
	if(res != ""){
		ans+=res;
		ans+=" ";
	}
	ans.erase(ans.size()-1,1);  

	cout<<ans;

}