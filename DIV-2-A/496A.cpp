#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll n, m, t, q;
	cin >> n;
	vector<int> v;

	while (n--) {
		cin >> q;
		v.push_back(q);
	}

	vector<int> res;

	int max = INT_MIN;

	for (int j = 1; j <= v.size() - 2; j++) {

		for (int k = 0; k < v.size(); k++) {
			if ( k + 1 != j and k + 2 < v.size() and v[k + 2] - v[k] > max) {
				max = v[k + 2] - v[k];
			}
		}
		cout << max << "\n";
		res.push_back(max);
		max = INT_MIN;
	}

	?
	sort(res.begin(), res.end());
	cout << res[0];

	return 0;
}