#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){

	string s;
	cin>>s;

	string res = "";
	for(int i=0;i<s.length();i++){

		if(!(s[i] == 'A' or s[i] == 'a' or s[i] == 'e' or s[i] == 'E' or s[i] == 'i' or s[i] == 'I' or s[i] == 'o' or s[i] == 'O' or s[i] == 'Y' or s[i] == 'y' or s[i] == 'u' or s[i] == 'U')){
			res+=".";
			if(s[i]>='A' and s[i] <= 'Z'){
				res+=s[i]+32;
			}else{
				res+=s[i];	
			}
			
		}
	}
	cout<<res;
	return 0;
}