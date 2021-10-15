#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n, a, b, c;
	cin >> t;
	while (t--) {
		cin >> a ;
		if (((a % 100) % 25) == 0) {
			cout << 0 << "\n";
		} else {
			string temp = to_string(t);
			int k = 0;
			for (int i = 0; i < s.length() - 2; i++) {
				string new_string = "";
				if (k != i) {
					new_string = + temp[i];
				}
				ll new_int = stoi(new_string);
			}
		}
	}

	return 0;
}