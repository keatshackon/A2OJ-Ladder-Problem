#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, a, b, c, d, price, q;
	cin >> t >> price;
	int i = 1;
	vector<int>v;
	while (t--) {
		cin >> n;
		int f = 0;
		while (n--) {
			cin >> q;
			if (q < price) {
				f = 1;
			}
		}
		if (f == 1) {
			v.push_back(i);
		}
		i++;
	}
	if (v.size() == 0) {
		cout << 0;
	} else {
		cout << v.size() << "\n";
		for (auto q : v) {
			cout << q << " ";
		}
	}
	return 0;

}