#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t;
	ll sum = 0;
	int q;
	cin >> t;
	vector<int>v;
	while (t--) {
		cin >> q;
		v.push_back(q);
		sum += q;
	}
	sort(v.begin(), v.end());
	int res = 0;
	int k = 0;
	for (int i = v.size() - 1; i >= 0; i--) {
		sum = sum - v[i];
		k += v[i];
		if (k <= sum) {
			res++;
		}
	}
	cout << res + 1;

	return 0;

}