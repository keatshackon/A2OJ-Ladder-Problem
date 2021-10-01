#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		if (s.length() > 10) {
			cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
		} else {
			cout << s << "\n";
		}
	}

	return 0;

}