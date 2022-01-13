#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, m;
	char q;
	cin >> n >> m;
	vector<vector<char>>v;

	for (int i = 0; i < n; i++) {
		vector<char>temp;
		for (int j = 0; j < m; j++) {
			cin >> q;
			temp.push_back(q);
		}
		v.push_back(temp);
	}

	// for (auto q : v) {
	// 	for (auto a : q) {
	// 		cout << a << " ";
	// 	}
	// 	cout << "\n";
	// }

	set<int>s;
	int x = 0, y = 0;
	for (int i = 0; i < m; i++) {
		int res = 0;
		y = -1;
		for (int j = 0; j < n; j++) {
			if (v[j][i] - '0' > res) {
				res = v[j][i] - '0';
				y = j;

			}
		}
		if (y != -1) {
			s.insert(y + 1);
		}

		x = -1;
		for (int j = 0; j < n; j++) {
			if (v[j][i] - '0' == res) {
				x = j;
			}
		}
		if (x != -1) {
			s.insert(x + 1);
		}
	}
	cout << s.size();

	return 0;
}
