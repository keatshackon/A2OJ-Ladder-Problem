#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, A = 0, B = 0, C = 0;
	cin >> t >> n;
	for (int i = 1; i <= 6; i++) {
		if (abs(i - t) < abs(i - n)) {
			A++;
		} else if (abs(i - t) > abs(i - n)) {
			B++;
		} else {
			C++;
		}
	}
	cout << A << " " << C << " " << B;
	return 0;

}

