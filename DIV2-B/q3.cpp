#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t, n, k, a;
	cin >> t;
	while (t--) {
		cin >> n ;
		string s;
		cin >> s;
		int f = 1;
		for (int i = 1; i < s.length(); i++) {
			if (s[i] == 'L' and s[i - 1] == 'L'
			        or s[i] == 'R' and s[i - 1] == 'R') {
				cout << "YES\n";
				f = 0;
				break;
			}
		}
		if (f == 1) {
			cout << "NO\n";
		}

	}

	return 0;
}