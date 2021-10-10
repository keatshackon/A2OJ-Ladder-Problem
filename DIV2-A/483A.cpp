#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, a, b, c, d;
	cin >> a >> b;

	if (a % 2 != 0) {
		a++;
	}
	if (a + 2 > b) {
		cout << -1;
	} else {
		cout << a << " " << a + 1 << " " << a + 2;
	}
	return 0;
}