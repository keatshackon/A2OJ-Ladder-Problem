#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin >> t;
	while (t--) {

		ll a, b;
		cin >> a >> b;
		string s1 = to_string(a);
		int len = s1.size();
		if (b == 0) {

			ll idx = len;
			for (int i = 0; i < len; i++) {
				if (s1[i] == '0') {
					s1[i] = '1';
					idx = i;
					break;
				}
			}
			for (int i = idx + 1; i < len; i++) {
				s1[i] = '1';
			}
		}
		else if (b == 9) {

			if (s1[0] == 9) {
				for (int i = 0; i < len; i++) {
					s1[i] = '0';
				}
				s1 = '1' + s1;
			}
			else {

				ll idx = len;
				for (int i = 0; i < len; i++) {

					if (s1[i] == '9') {
						for (int j = i - 1; j >= 0; j--) {
							if (s1[j] <= '7') {
								s1[j]++;
								idx = j;
								goto credit;
							}
						}
						for (int i = 0; i < len; i++) {
							s1[i] = '0';
						}
						s1 = "1" + s1;
						goto fevicol;
					}
				}
credit:;
				for ( int j = idx + 1; j < len; j++ ) {
					s1[j] = '0';
				}
fevicol:;
			}
		}
		else {
			ll i = 0;
			for (i = 0; i < len; i++) {
				if ((s1[i] - '0') == b) {
					s1[i] = s1[i] + 1;
					break;
				}
			}
			for (int j = i + 1; j < len; j++) {
				s1[j] = '0';
			}
		}

		ll x = stoll(s1);
		cout << x - a << "\n";
	}
	return 0;
}
