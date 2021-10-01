#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t;
	cin >> t;
	if (t >= 10) {
		cout << t;
	} else {
		string s = to_string(abs(t));
		char a  = s[s.length() - 1];
		char b  = s[s.length() - 2];


		if (a - '0' >= b - '0') {
			cout << t / 10;
		} else {
			string res = "";
			for (int i = 0; i < s.length() - 2; i++) {
				res += s[i];
			}
			res += a;

			int temp = stoi(res);
			cout << (-1 * temp);

		}
	}
	return 0;

}