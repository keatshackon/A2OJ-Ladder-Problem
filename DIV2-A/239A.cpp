#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll y, k, n;
	cin >> y >> k >> n;
	vector<int>v;
	int i = 1;
	while (i <= k) {
		if (((((i + y) <= n)) and ((i + y) % k == 0))) {
			v.push_back(i);
		}
		i++;
	}

	sort(v.begin(), v.end());

	if (v.size() == 0) {
		cout << -1;
		return 0;
	}

	for (auto q : v) {
		cout << q << " ";
	}
	return 0;
}