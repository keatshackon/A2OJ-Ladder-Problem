#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

	string s;
	cin>>s;

	if(s.length() < 3){
		cout<<s[0];
	}else{
		string temp = "";
		for(int i = 0;i < s.length();i++){
			if(s[i] == '1' or s[i] == '3' or s[i] == '2'){
				temp += s[i];
			}
		}

		sort(temp.begin(), temp.end());
		string te= "";
		for(int i = 0;i < temp.length()-1;i++){
			te += temp[i];
			te+="+";
		}
		te+=temp[temp.length()-1];

		cout<<te;
	}

	

}