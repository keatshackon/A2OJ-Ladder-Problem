#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main() {

	ll t, n, k, l;
	cin >> t;
	while (t--) {
		string s;
		int n;
		cin >> n >> s;
		int f = 1;
		map<char, int> m;
		for (int i = 0; i < s.length(); i++) {

			if (i + 1 < s.length()) {
				if (s[i + 1] == s[i]) {
					continue;
				}
			}

			if (m.count(s[i]) != 0 ) {
				cout << "NO\n";
				f = 0;
				break;
			} else {
				m[s[i]] = 1;
			}
		}
		if (f == 1) {
			cout << "YES\n";
		}
	}

	return 0;
}