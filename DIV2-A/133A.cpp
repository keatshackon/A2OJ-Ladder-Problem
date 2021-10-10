#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	string s;
	cin >> s;
	int f = 0;
	for (auto q : s) {
		if (q == 'H' or q == 'Q' or q == '9') {
			f = 1;
		}
	}
	if (f == 1) cout << "YES";
	else {
		cout << "NO";
	}

	return 0;

}