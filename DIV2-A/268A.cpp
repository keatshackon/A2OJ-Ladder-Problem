#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, a, b;
	vector<pair<int, int>> v;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		v.push_back({a, b});
	}
	int res = 0;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0 ; j < v.size(); j++) {
			if (v[i].first ==  v[j].second) {
				res++;
			}
		}
	}
	cout << res;

	return 0;

}