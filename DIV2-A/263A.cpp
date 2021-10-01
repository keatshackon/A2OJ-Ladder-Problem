#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	vector<vector<int>> v;
	int t, q;
	int x, y;
	int i, j;
	for (int i = 0; i < 5; i++) {
		vector<int>temp;
		for (int j = 0; j < 5; j++) {
			cin >> q;
			temp.push_back(q);
			if (q == 1) {
				x = i + 1;
				y = j + 1;
			}
		}
		v.push_back(temp);
	}

	cout << (abs(3 - x) + abs(3 - y));

	return 0;

}