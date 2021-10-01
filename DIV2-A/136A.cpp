#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {


	int n;
	cin >> n;
	map<int, int>num;
	for (int i = 1; i <= n; i++) {
		int val;
		cin >> val;

		num[val] = i;
	}

	for (auto i : num) {
		cout << i.second << " ";
	}

	return 0;

}