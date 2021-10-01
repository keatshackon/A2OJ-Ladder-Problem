#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll n;
	cin >> n;

	if (n >= 10) {
		cout << n;
	} else {
		int t = abs(n);
		string ss = to_string(t);
		int s1 = ss[ss.length() - 1] - '0';
		int s2 = ss[ss.length() - 2] - '0';

		if (s1 > s2) {
			string temp(ss.begin(), ss.begin() + ss.length() - 1);
			cout << "-" << temp;
		} else {
			string temp(ss.begin(), ss.begin() + ss.length() - 2);

			char kkk = ss[ss.length() - 1];
			if (kkk == '0') cout << 0;
			else cout << "-" << ss.erase(ss.length() - 2) + kkk;

		}
	}
	return 0;
}