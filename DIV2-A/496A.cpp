#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, a, b, c, d, q;
	cin >> t;
	vector<int>v;
	while (t--) {
		cin >> q;
		v.push_back(q);
	}
	vector<int>res;
	int j = 1;
	for (int i = 1; i < v.size() - 1; i++) {

		vector<int>temp;
		for (int k = 0; k < v.size() ; k++) {
			if (k != j) {
				temp.push_back(v[k]);
			}
		}
		j++;
		int kk = INT_MIN;
		for (int s = 1; s < temp.size(); s++) {
			if (abs(temp[s] - temp[s - 1]) > kk ) {
				kk = temp[s] - temp[s - 1];
			}
		}
		res.push_back(kk);
	}
	sort(res.begin(), res.end());
	cout << res[0];
	return 0;
}