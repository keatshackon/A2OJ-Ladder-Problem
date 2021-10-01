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

	ll t, k, a, b;
	cin >> t >> k;
	vector<pair<int, int>>v;
	while (k--) {
		cin >> a >> b;
		v.push_back({a, b});
	}
	sort(v.begin(), v.end(), cmp);
	int f = 0;
	for (auto q : v) {
		if (q.first < t) {
			t += q.second;
		} else {
			f = 1;
			break;
		}
	}
	if (f == 1) {
		cout << "NO";
	} else {
		cout << "YES";
	}

}