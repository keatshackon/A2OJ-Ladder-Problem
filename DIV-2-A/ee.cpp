#include<bits/stdc++.h>
using namespace std;


bool prime(int n){
	if(n==0)
		return 0;

	for(int i=2;i*t<=n;i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}


int main(){

	map<int,int> ma;
	vector<int> v = {12,2,32,342,43,54,646,57,68};

	for(int i = 0;i < v.size();i++){
		int temp = v[i];

		for(int j = 1; j <= temp/2;j++){

			if(prime(j)){
				if(temp / j == 0){
					ma[j]++;
				}	
			}
		}
	}

	int large=0;

	for(auto q:ma){
		if(q.second > large){
			large = q.second;
		}
	}

	cout<<large;

}