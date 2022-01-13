#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while (t--) {
		string s;
		stack<char>st;
		cin >> s;

		ll ans = 0;
		ll cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '<') {
				st.push(s[i]);
			} else {
				if (st.size() != 0) {
					st.pop();
					cnt += 2;
				} else {
					if (cnt > ans) {
						ans = cnt;
					}
					cnt = 0;
				}
			}
		}
		if (cnt > ans) {
			ans = cnt;
		}
		cout << ans << "\n";
	}
	return 0;
}