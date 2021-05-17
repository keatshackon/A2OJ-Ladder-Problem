#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, m, l, k, q;
	cin >> n >> m;
	int i = 1;
	int cnt = 0;
	vector<int> res;
	while (n--) {
		cin >> k;
		int temp = k;
		int flag = 1;
		while (temp--) {
			cin >> q;
			if (m - q > 0 and flag == 1) {
				cnt++;
				flag = 0;
				res.push_back(i);

			}
		}
		i++;
	}
	cout << cnt << "\n";

	for (auto q : res) {
		cout << q << " ";
	}
	return 0;
}