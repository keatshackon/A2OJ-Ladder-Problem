#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	int n, q;
	int i = 0;
	vector<vector<int>>v;
	cin >> n;
	int sum = 0;
	while (i < n) {
		vector<int>temp;
		for (int j = 1; j <= 3; j++) {
			cin >> q;
			temp.push_back(q);
		}
		v.push_back(temp);
		i++;
	}
	int f = 1;
	for (int i = 0; i < 3; i++) {
		int temp = 0;
		for (int j = 0; j < n; j++) {
			temp += v[j][i];
		}
		if (temp != 0) {
			f = 0;
			break;
		}
	}
	if (f == 0) {
		cout << "NO";
	} else {
		cout << "YES";
	}

	return 0;
}