#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){

	ll t,n,m,k,j,i;
	string s;
	cin>>s;

	bool h = false;
	bool e = false;
	bool l1 = false;
	bool l = false;
	bool o = false;

	int f = 1;
	i = 0;
	while(i < s.length()){
		if(s[i] == 'h'){
			break;
		}
		i++;
	}
	int cnt = 0;
	
	for(;i < s.length();i++){
		
		if(s[i] == 'e'){
			if(h == true){
				e = true; 
			}else{
				cout<<"NO";
				f=0;
				break;
			}
		}else if(s[i] == 'l'){
			if(e == true){
				l = true; 
				cnt++;
			}
		}else if(s[i] == 'o'){
			if(e == true){
				l = true; 
			}else{
				cout<<"NO";
				f=0;
				break;
			}
		}
	}
	if(f == 1 and cnt < 2){
		cout<<"YES";
	}else{
		cout<<"No";
	}
}