#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	string s;
	cin >> s;
	int small = 0;
	int large = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' and s[i] <= 'z') {
			small++;
		} else {
			large++;
		}
	}
	if (small >= large) {
		for (auto q : s) {
			if (q >= 'A' and q <= 'Z') {
				cout << (char)(q + 32);
			} else {
				cout << q;
			}
		}
	} else {
		for (auto q : s) {
			if (q >= 'a' and q <= 'z') {
				cout << (char)(q - 32);
			} else {
				cout << q;
			}
		}
	}

}