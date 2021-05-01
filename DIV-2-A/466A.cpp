#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {


	// <======================INCOMPLETE=====================>
	ll t, n, m, j, k, l;
	cin >> n >> m >> l >> k;


	int a = ((n / m) + 1) * k;
	if (a >= l * n ) {
		cout << l*n;
	} else {
		int b = n / m * k;
		n  = n - n / m ;

		if (n == 0  ) {
			if ((l * k > b)) {
				cout << b;
			} else {
				cout << (l * k);
			}
		} else {
			int a =
		}


	}


}