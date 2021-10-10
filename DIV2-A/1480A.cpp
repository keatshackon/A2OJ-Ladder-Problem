#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, a;
	cin >> t;
	string s;
	while (t--) {

		cin >> s;
		int f = 0;
		for (int i = 0; i < s.length(); i++) {
			if (f == 0) {
				if (s[i] > 'a') {
					s[i] = 'a';
				} else {
					s[i] = 'b';
				}
				f = 1;
			} else {
				if (s[i] < 'z') {
					s[i] = 'z';
				} else {
					s[i] = 'y';
				}
				f = 0;
			}
		}

		cout << s << "\n";
	}
	return 0;
}