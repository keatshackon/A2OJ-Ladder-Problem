#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool cmp(pair<int, int>a, pair<int, int>b) {

	if (b.first < a.first) {
		return false;
	}
	return true;
}

int main() {

	ll n, k, a, b;
	cin >> n;
	vector<pair<int, int>> v;
	while (n--) {
		cin >> a >> b;
		v.push_back({a, b});
	}
	// for (auto q : v) {
	// 	cout << q.first << " " << q.second << "\n";
	// }
	sort(v.begin(), v.end(), cmp);

	for (auto q : v) {
		cout << q.first << " " << q.second << "\n";
	}

	int f = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i].second > v[i + 1].second) {
			f = 1;
			break;
		}
	}

	if (f == 1) {
		cout << "Happy Alex";
	} else {
		cout << "Poor Alex";
	}
	return 0;

}