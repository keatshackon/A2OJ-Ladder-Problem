#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll n;
	cin >> n;
	if (n % 2 == 1) {
		cout << -1;
		return 0;
	}
	int k = 1;
	int s = 2;
	for (int i = 1; i <= n / 2; i ++) {
		cout << s << " " << k << " ";
		s += 2;
		k += 2;
	}
	return 0;
}

