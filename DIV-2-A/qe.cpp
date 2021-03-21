#include<bits/stdc++.h>
using namespace std;


int main(){


	vector<int> v = {1,1,1,2,4,5,5,7};

	map<pair<int,int>,int> ma;

	for(int i = 0;i < v.size()-1;i+=2){

		ma[make_pair(v[i],v[i+1])]++;
		
	}

	int large = INT_MIN;


	int a = 0;
	int b = 0;

	for(auto q:ma){
		auto te = q.first;
		int c = q.second;

		if(c > large){
			large = c;
			a = te.first;
			b = te.second;
		}
	}

	int min_sum = INT_MAX;

	for(auto q:ma){
		if(q.second == large){

			if(q.first.first + q.first.second < min_sum){
				min_sum = q.first.first + q.first.second;
				a = q.first.first;
				b = q.first.second;
			}
		}
	} 

	cout<<a<<" "<<b;

	return 0;

}