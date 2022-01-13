#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ll n, t;
	cin >> n;
	vector<int>v(3);
	for (auto &q : v) {
		cin >> q;
	}
	//int k = 0;
	int ans = INT_MIN;
	for (int i = 0; i < 1010; i++) {
		for (int j = 0; j < 1010; j++) {
			for (int k = 0; k < 1010; k++) {
				if (((i * v[0] + j * v[1] + k * v[2]) == n) and
				        (i + j + k) > ans) {
					ans =  i + j + k;
				}
			}
		}
	}
	cout << ans;

	return 0;
}