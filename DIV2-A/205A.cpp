#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, q;
	map<int, int> m;
	vector<int>v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> q;
		++m[q];
		v.push_back(q);
	}

	auto aa = m.begin();

	if (aa -> second == 1) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == aa->first) {
				cout << i + 1;
				break;
			}
		}
	} else {
		cout << "Still Rozdil";
	}
	return 0;

}