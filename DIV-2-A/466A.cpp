#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	// =============== INCOMPLETE ===============

	ll n, m, a, b;
	cin >> n >> m >> a >> b;
	int total = 0;

	if (m >= b) {

		int cnt = n / m;
		total = cnt * b;
		if (n % m != 0) {
			total += (n % m) * a;
		}
		cout << total;

	} else {
		cout << (n * a);
	}

	return 0;

}