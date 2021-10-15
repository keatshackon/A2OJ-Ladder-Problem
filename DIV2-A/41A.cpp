#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	string s, k;
	cin >> s >> k;

	if (s.length() != k.length()) {
		cout << "NO";
		return 0;
	}
	int f = 0;
	int j = k.length() - 1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != k[j]) {
			cout << "NO";
			f = 1;
			break;
		}
		j--;
	}
	if (f == 0) {
		cout << "YES";
	}
	return 0;
}