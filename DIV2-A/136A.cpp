#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	int t, q;
	cin >> t;
	vector<int>v;
	vector<int>res(t);
	while (t--) {
		cin >> q;
		v.push_back(q);
	}

	for (int i = 0; i < v.size(); i++) {
		res[v[i] - 1] = i + 1;
	}

	for (auto q : res) {
		cout << q << " ";
	}

	return 0;
}