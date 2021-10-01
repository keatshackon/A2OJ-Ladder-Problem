#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	string s;
	cin >> s;
	int h = 0;
	int  e = 0;
	int  l1 = 0;
	int  l2 = 0;
	int  o = 0;
	int cnt = 1;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'h' ) {
			h = 1;
		} else if (s[i] == 'e' and h == 1) {
			e = 1;
		} else if (s[i] == 'l' and e == 1 and cnt == 1) {
			l1 = 1;
			cnt++;
		} else if (s[i] == 'l' and l1 == 1) {
			l2 = 1;
		} else if (s[i] == 'o' and l2 == 1) {
			o = 1;
		}
	}

	if ((h + e + l1 + l2 + o) == 5) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;

}