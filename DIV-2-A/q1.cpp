#include<bits/stdc++.h>
using namespace std;
#define ll long long


int solve(vector<string> &s){
	
	long unsigned int q = 0;
	int amount = 0;
	while(q < s.size()){
		string ss = s[q];

		int f = 0;

		map<int, int> ma = {{10,1},{20,1}, {50,1}, {100,1}, {200,1}, {500,1} , {1000,1}};

		if(ss.length() >= 10 and ss.length() <= 12){

			if(ss[0] != ss[1]  and ss[1] != ss[2] and ss[2] != ss[0]){

				if(ss[0] >= 'A' and ss[0] <= 'Z' and ss[1] >= 'A' and ss[1]<='Z' and ss[2]>='A' and ss[2]<='Z'){

					string temp = "";

					temp += ss[3];
					temp += ss[4];
					temp += ss[5];
					temp += ss[6];

					bool check = 0;

					for(int i = 0;i < 4;i++){
						if(isalpha(temp[i])){
							check = 1;
							break;
						}
					}

					if(check == 1){
						q++;
						continue;
					}

					int t = stoi(temp);

					if(t >= 1900 and t <= 2019){

						long unsigned int i = 7;
						string num = "";
						while(i < ss.length()){
							if(ss[i] >='0' and ss[i] <= '9'){
								num += ss[i];
							}else{
								break;
							}
							i++;
						}

						int nu = stoi(num);

						if(ma.count(nu) != 0){

							if(ss[ss.length()-1]>= 'A' and ss[ss.length()-1] <= 'Z' and ss[ss.length()-2]>='0' and ss[ss.length()-2]<='9'){
								f = 1;
								amount += nu;
							}
						}

					}

				}
			}
		}

		q++;

	}

	return amount;
}


int main(){
	
	int tc = 0;
	vector<string> s = {"QWE2000500","QWE2020500A","QWQ2000500A","QWE200050A"};
	cout<<solve(s);

	return 0;
	
}