#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll n, q;
	cin >> n;
	vector<int>v;
	while (n--) {
		cin >> q;
		v.push_back(q);
	}
	int cnt1 = 0;
	int cnt2 = 0;

	int res1 = v[0];
	int res2 = v[0];
	for (int i = 1; i < v.size(); i++) {
		if (res1 < v[i]) {
			res1 = v[i];
			cnt1++;
		}
		if (res2 > v[i]) {
			res2 = v[i];
			cnt2++;
		}
	}
	cout << cnt1 + cnt2;

	return 0;
}