#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, q, k;
	cin >> t >> k;
	vector<int>v;
	while (t--) {
		cin >> q;
		v.push_back(q);
	}
	int cnt = 0;
	int res = 0;
	for (auto q : v) {
		int temp = q;
		int f1 = 0;
		int f2 = 0;
		cnt = 0;
		while (temp) {

			if (temp % 10 == 4) {
				cnt++;
			} else if (temp % 10 == 7) {
				cnt++;
			}
			temp /= 10;
		}
		if (cnt <= k) {
			res++;
		}

	}

	cout << res;

	return 0;
}