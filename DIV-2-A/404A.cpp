#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n;
	cin >> n;
	char q;

	vector<vector<int>> v;
	set<char>s1;
	set<char>s2;

	for (int i = 0; i < n; i++) {
		vector<int> temp;
		for (int j = 0; j < n; j++) {
			cin >> q;
			temp.push_back(q);
		}
		v.push_back(temp);
	}


	int x = v.size() - 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				s1.insert(v[i][j]);
			} else if (j == x) {
				s1.insert(v[i][x]);
			} else {
				s2.insert(v[i][j]);
			}
		}
		x--;
	}

	if (s1.size() != 1 ) {
		cout << "NO";
		return 0;
	}
	if (s1.size() == s2.size()) {
		if (v[0][0] != v[0][1]) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	} else {
		cout << "NO";
	}
}