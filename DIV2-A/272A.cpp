#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	vector<int>v(t);

	for (auto &q : v) cin >> q;

	set<int>ss;

	for (int i = 0; i < v.size(); i++) {
		for (int j = 1; j <= 5; j++) {
			if (v[i] % 2 == 0) {
				ss.insert(2);
				ss.insert(4);
			} else {
				ss.insert(1);
				ss.insert(3);
				ss.insert(5);
			}
		}
	}
	cout << ss.size();

	return 0;
}

