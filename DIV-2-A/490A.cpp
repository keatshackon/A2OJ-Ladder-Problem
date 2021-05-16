#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, l, q;
	cin >> n;

	int cnt1 , cnt2, cnt3;

	vector<pair<int, int>> v1;
	vector<pair<int, int>> v2;
	vector<pair<int, int>> v3;

	cnt1 = 0;
	cnt2 = 0;
	cnt3 = 0;

	int i = 1;
	while (n--) {
		cin >> q;
		if (q == 1) {
			cnt1++;
			v1.push_back({q, i});
		} else if (q == 2) {
			cnt2++;
			v2.push_back({q, i});
		} else {
			cnt3++;
			v3.push_back({q, i});
		}
		i++;
	}

	int res = min(min(cnt1, cnt2), cnt3);

	cout << res << "\n";

	if (res != 0) {
		for (int i = 0 ; i < res; i++) {
			cout << v1[i].second << " " << v2[i].second << " " << v3[i].second << "\n";
		}
	}

	return 0;
}