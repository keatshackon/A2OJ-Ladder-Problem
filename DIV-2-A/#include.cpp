#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, q;
	cin >> t >> k;
	vector<int>v
	while (t--) {
		cin >> q;
		v.push_back(q);
	}
	int cnt = 0;
	for (auto q : v) {
		int temp = q;
		int f1 = 0;
		int f2 = 0;
		while (temp) {

			if (temp % 10 == 4) {
				f1 = 1;
			} else if (temp % 10 == 7) {
				f2 = 1;
			}
			temp /= 10;
		}
		if (f1 == 0 and f2  == 0) {
			cnt++;
		}

	}

	cout << cnt;

	return 0;
}