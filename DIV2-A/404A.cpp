#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, a, b, c, d;
	char q;
	cin >> t;
	vector<vector<char>>v;
	map<char, int>m;
	for (int i = 0; i < t; i++) {
		vector<char>temp;
		for (int j = 0; j < t; j++) {
			cin >> q;
			temp.push_back(q);
			if (m.count(q) == 0) {
				m[q] = 1;
			}
		}
		v.push_back(temp);
	}

	if (m.size() > 2) {
		cout << "NO";
		return 0;
	}

	int k = 0;
	int f = 0;
	int letme = v[0][0];
	for (int i = 0; i < t; i++) {
		if (v[i][k] != letme) {
			f = 1;
			break;
		}
		k++;
	}
	if (f == 1) {
		cout << "NO";
		return 0;
	}
	f = 0;
	k = t - 1;
	for (int i = 0; i < t ; i++) {
		if (letme != v[i][k]) {
			f = 1;
			break;
		}
		k--;
	}

	if (f == 1) {
		cout << "NO";
		return 0;
	}


	int flag = 1;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++) {
			if (!(i == j or ((i + 1 + j ) == (t)))) {
				if (v[0][0] == v[i][j]) {
					flag = 0;
					break;
				}
			}
		}
		if (flag == 0) {
			break;
		}
	}
	if (flag == 0) {
		cout << "NO";
		return 0;
	}


	cout << "YES";
	return 0;
}