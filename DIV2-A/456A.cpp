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

	ll t, n, a, b, c, d;
	cin >> n ;

	int res = INT_MIN;
	vector<pair<int, int>>v;
	while (n--) {
		cin >> a >> b;
		v.push_back({a, b});
	}
	sort(v.begin(), v.end(), cmp);
	int f = 0;
	for (int i = 1; i < v.size(); i++) {
		if (v[i].second < v[i - 1].second ) {
			f = 1;
		}
	}

	if (f == 1) {
		cout << "Happy Alex";
	} else {
		cout << "Poor Alex";
	}
	return 0;
}