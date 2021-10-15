#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s, k;
	cin >> s >> k;
	string ans = "";
	for (int i = 0; i < s.length(); i++) {

		if (s[i] != k[i]) {
			ans += "1";
		} else {
			ans += '0';
		}
	}
	cout << ans;
	return 0;


}