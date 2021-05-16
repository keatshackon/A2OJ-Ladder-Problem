#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll n, d, q;
	cin >> n >> d;
	ll sum = 0;
	vector<int> v;
	while (n--) {
		cin >> q;
		sum += q;
		v.push_back(q);
	}

	sum += ((v.size() - 1) * 10);

	// cout << sum << "\n";

	if (d >= sum) {

		int res = ((v.size() - 1) * 10) / 5 +  (d - sum) / 5;
		cout << res;

	} else {
		cout << -1;
	}
}