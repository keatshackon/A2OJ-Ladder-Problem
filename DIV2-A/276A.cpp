#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, a, c, d, q, k, b;
	vector<int>v;
	cin >> n >> k;
	int res = INT_MIN ;
	while (n--) {
		cin >> a >> b;

		int temp = 0;
		int en = INT_MIN;
		if (k >= b) {
			temp = k - b;
			en = a;
		} else {
			temp = b - k;
			en = a - temp;;
		}
		if (res < en) {
			res = en;
		}
	}
	cout << res;
	return 0;

}