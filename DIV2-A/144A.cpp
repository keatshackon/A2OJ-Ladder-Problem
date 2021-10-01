#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, k = 0;
	int i1, i2, q;
	cin >> t;
	vector<int>v;
	int large = INT_MIN;
	while (t--) {
		cin >> q;
		v.push_back(q);
		if (large < q) {
			large = q;
			i1 = k;
		}
		k++;
	}
	int small = INT_MAX;
	for (int i = v.size() - 1; i >= 0 ; i--) {
		if (small > v[i] ) {
			small = v[i];
			i2 = i;
		}
	}

	if (i1 < i2) {
		cout << (i1 + (v.size() - i2 - 1));
	} else {
		cout << (i1 + (v.size() - i2 - 1)) - 1;
	}

	return 0;

}