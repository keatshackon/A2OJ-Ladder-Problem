#include<bits/stdc++.h>
using namespace std;


bool  prime(int a){

	if(a == 0){
		return false;
	}

	int i = 2;
	for(int i = 2;i * i <= a;i++){
		if(a % i == 0){
			return false;
		}
	}

	return true;
}


bool fact(int a,int b){
	
	int c = 0;
	int d = 0;

	if(a % 2 == 0  and b % 2 == 0 and a != b){
		if(b > a){
			return true;
		}else{
			return false;
		}
		
	}

	if(prime(a)){
		for(int i = 0;i*i <= b;i++ ){
			if(a % i == 0){
				c = i;
			}
		}
	}else{
		c = a;
	}
	
	if(prime(b)){
		for(int i = 2;i*i <= b;i++ ){
			if(b % i == 0){
				c = i;
			}
		}
	}else{
		d = b;
	}

	if(d>c){
		return true;
	}else{
		return false;
	}
	for(int i = 2;i * i <= b;i++ ){
		if(b % i == 0){
			d = i;
		}
	}
}

int main()
{
	vector<int> v = {2,3,4,5,6,7,8,8};
	sort(v.begin(), v.end(),fact);
	for(auto q:v){
		cout<<q<<" ";
	}
    return 0;
}





// struct comp{
// bool operator()(string s1,string s2){

// 	int a=0;
// 	int b=0;

// 	for(auto q:s1){
// 		if(q == 'a'){
// 			a++;
// 		}
// 	}

// 	for(auto q:s2){
// 		if(q == 'a'){
// 			b++;
// 		}
// 	}
// 	if(b > a){
// 		return true;
// 	}else if(a == b){
// 		if(s1 < s2){
// 			return true;
// 		}
// 	}
// 	return false;


// 	}
// };