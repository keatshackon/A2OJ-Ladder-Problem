#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, m, k, n, q;
	cin >> t;
	while (t--) {
		cin >> n;
		std::vector<int> v;

		while (n--) {
			cin >> q;
			v.push_back(q);
		}
		int cnt = 0;
		for (int i = 0; i < v.size(); i++) {
			for (int j = i + 1; j < v.size(); j++) {
				if (j - i == v[j] - v[i]) {
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}