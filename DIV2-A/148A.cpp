#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll l, k, a, d, b;
	cin >> l >> k >> a >> b >> d;
	int cnt = 0;
	for (int i = 1; i <= d; i++) {

		if (!(i % l == 0 or i % k  == 0 or i % a == 0 or i % b == 0)) {
			cnt++;
		}
	}
	cout << d - cnt;

	return 0;
}

