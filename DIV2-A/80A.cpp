#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(ll n) {

	if (n < 1) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;

}

int main() {

	ll a, b;
	cin >> a >> b;

	if (b <= a) {
		cout << "NO";
		return 0;
	}

	if (b % 2 == 0 and b != 2) {
		cout << "NO";
		return 0;
	}

	if (!(is_prime(b)) ) {
		cout << "NO";
		return 0;
	}

	int tt = ++a;

	while (true) {
		if (is_prime(tt)) {
			if (tt != b) {
				cout << "NO";
				break;
			} else {
				cout << "YES";
				break;
			}
		}
		tt++;
	}
	return 0;

}