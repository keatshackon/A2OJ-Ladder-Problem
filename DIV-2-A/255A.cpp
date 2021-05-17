#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, m, k, l, q;
	cin >> t;
	vector<int> v;

	int i = 0;

	int a = 0;
	int b = 0;
	int c = 0;

	while (t--) {

		cin >> q;

		if (i % 3 == 0) {
			a += q;
			i++;
		} else if (i % 3 == 1) {
			b += q;
			i++;
		} else if (i % 3 == 2) {
			c += q;
			i++;
		}

	}


	int res = max(max(a, b), c);

	if (res == a) {
		cout << "chest";
	} else if (res == b) {
		cout << "biceps";
	} else {
		cout << "back";
	}
	return 0;
}