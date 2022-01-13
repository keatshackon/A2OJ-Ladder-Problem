#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, m, x, y, q;
	cin >> t;
	while (t--) {
		cin >> m >> x >> y;
		vector<int>v;
		vector<int>ans;

		while (m--) {
			cin >> q;
			v.push_back(q);
			ans.push_back((x * y) + q);
		}

		for (auto q : ans) {
			cout << q << " ";
		}
		cout << "\n";

		// sort(ans.begin(), ans.end());
	}
	return 0;

}