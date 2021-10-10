#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, k;
	string s;
	cin >> t >> k;
	cin >> s;
	while (k--) {
		int i = 0;
		while ( i < s.length() - 1) {
			if (s[i] == 'B' and s[i + 1] == 'G') {
				char temp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = temp;
				i++;

			}
			i++;
		}

	}
	cout << s;

	return 0;
}