#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t;
	cin >> t;
	int cnt = 0;
	while (t) {
		int temp = t % 10;
		if (temp == 4 or temp == 7 )
			cnt++;
		t /= 10;
	}

	if (cnt == 0) {
		cout << "NO";
		return 0;
	}
	int f = 0;
	while (cnt) {
		int tt = cnt % 10;
		if (!(tt == 4  or tt  == 7)) {
			f = 1;
			break;
		}
		cnt /= 10;
	}
	if (f == 1) {
		cout << "NO";
	} else {
		cout << "YES";
	}
	return 0;
}