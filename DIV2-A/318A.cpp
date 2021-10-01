#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long


int main() {

	ll a, b;
	cin >> a >> b;
	ll res = 0;
	if (a % 2 == 0) {
		if (b <= (a / 2)) {
			res = -1;
			while (b >= 1) {
				res += 2;
				b--;
			}
			cout << res;
		} else {
			res = 0;
			b = b - (a / 2);
			while (b >= 1) {
				res += 2;
				b--;
			}
			cout << res;
		}
	} else {
		if (b <= ((a / 2) + 1)) {
			res = -1;
			while (b >= 1) {
				res += 2;
				b--;
			}
			cout << res;
		} else {
			res = 0;
			b = b - ((a / 2) + 1);
			while (b >= 1) {
				res += 2;
				b--;
			}
			cout << res;
		}
	}


}