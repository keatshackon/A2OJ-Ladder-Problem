#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, int>a, pair<int, int>b) {
	if (b.first > a.first) {
		return true;
	}
	return false;
}

int main() {
	ll t, n, k, l, q;
	cin >> t >> n;
	vector<pair<int, int>> v;
	while (n--) {
		cin >> q >> l;
		v.push_back(make_pair(q, l));
	}

	sort(v.begin(), v.end(), cmp);
	int f = 1;

	for (auto q : v) {
		if (q.first < t) {
			t += q.second;
		} else {
			f = 0;
		}
	}
	if (f == 0) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
	return 0;
}