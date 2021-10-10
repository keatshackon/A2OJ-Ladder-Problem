#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	string s;
	ll t;
	cin >> t >> s;
	int cnt = 0;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1]) {
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}

