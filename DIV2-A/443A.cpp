#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long

int main() {

	string s;
	getline(cin, s);
	set<char>uni;
	for (auto q : s) {
		if (q >= 'a' and q <= 'z') {
			uni.insert(q);
		}

	}
	cout << uni.size();

	return 0;

}