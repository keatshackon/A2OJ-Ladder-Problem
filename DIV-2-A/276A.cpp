#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, m, k;
	cin >> t >> k;
	int a, b;
	int max = INT_MIN;
	int res = 0;
	while (t--) {
		cin >> a >> b;

		if (k < b) {
			if ( (a - (b - k)) > max ) {
				max = a - (b - k);
				res = max;
			}
		} else {
			if ((a) > max) {
				max = a;
				res = max;
			}
		}
	}
	cout << res;
}