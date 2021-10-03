#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, q;
	cin >> t;
	int ev = 0;
	int od = 0;
	int res2 = -1;
	int res1 = -1;
	int i = 1;
	while (t--) {
		cin >> q;
		if (q % 2 == 0) {
			ev++;
			res2 = i;
		} else {
			od++;
			res1 = i;
		}
		i++;
	}

	if (ev > od) {
		cout << res1;
	} else {
		cout << res2;
	}

	return 0;

}