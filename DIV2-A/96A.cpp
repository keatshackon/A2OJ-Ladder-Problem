#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int f = 0;
	int cnt = 1;
	for (int i = 1; i < s.length(); i++) {

		if (s[i] == s[i - 1]) {
			cnt++;
		} else {
			if (cnt >= 7) {
				f = 1;
				break;
			}
			cnt = 1;
		}
	}
	if (cnt >= 7) {
		cout << "YES";
		return 0;
	}

	if (f == 1) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;

}