#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	int t, k, n;
	cin >> t;
	while (t--) {
		cin >> n;

		if (n % 2 == 0) {

			for (int lll = 1; lll <= n; lll++) {
				cout << lll << " ";
			}
		} else {

			for (int ss = n; ss >= 1; ss--) {
				cout << ss << " ";
			}
		}
		cout << "\n";

	}
	return 0;
}