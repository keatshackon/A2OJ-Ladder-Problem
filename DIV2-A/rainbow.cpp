#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t, q, n;
	cin >> t;
	while (t--) {
		cin >> n;
		set<int>s;
		vector<int> v;
		while (n--) {
			cin >> q;
			s.insert(q);
			v.push_back(q);
		}
		if (s.size() != 7 or accumulate(s.begin(), s.end(), 0) != 28) {
			cout << "no\n";
			continue;
		}

		int i = 0;
		int j = v.size() - 1;
		int f = 1;
		while (i < j) {
			if (v[i] != v[j]) {
				f = 0;
				break;
			}
			i++;
			j--;
		}
		if (f == 0) {
			cout << "no\n";
		} else {
			cout << "yes\n";
		}

	}
	return 0;
}