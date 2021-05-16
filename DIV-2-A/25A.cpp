#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll n, q;
	cin >> n;
	int i = 1;
	int ev = 0;
	int od = 0;
	int res = 0;
	std::vector<int> v;
	while (n--) {
		cin >> q;
		if (q % 2 == 0) {
			ev++;
		} else {
			od++;
		}
		v.push_back(q);
	}

	if (od == 1) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i] % 2 == 1) {
				cout << i + 1;
				break;
			}
		}
	} else {
		for (int i = 0; i < v.size(); i++) {
			if (v[i] % 2 == 0) {
				cout << i + 1;
				break;
			}
		}
	}
	return 0;
}