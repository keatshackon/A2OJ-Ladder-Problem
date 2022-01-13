#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= 'A' and s[i] <= 'Z') {
				s[i] = s[i] + 32;
			}
		}
		int i = 0;
		int j = s.length() - 1;
		int f = 1;
		while (i < j) {
			if (s[i] != s[j]) {
				f = 0;
				break;
			}
			i++;
			j--;
		}
		if (f == 1) {
			cout << "No";
		} else {
			cout << "Yes";
		}
	}

}

