#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, q;
	cin >> t;
	n = 1;
	vector<pair<int, int>>programming;
	vector<pair<int, int>>maths;
	vector<pair<int, int>>pe;
	while (t--) {
		cin >> q;
		if (q == 1) {
			programming.push_back({q, n});
		} else if (q == 2) {
			maths.push_back({q, n});
		} else {
			pe.push_back({q, n});
		}
		n++;
	}

	int res = min(programming.size(), min(pe.size(), maths.size()));

	cout << res << "\n";

	for (int i = 0; i < res; i++) {
		cout << programming[i].second << " " << maths[i].second << " " << pe[i].second << "\n";
	}


	return 0;

}