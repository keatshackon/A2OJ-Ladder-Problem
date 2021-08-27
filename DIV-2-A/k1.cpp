#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll a;
	cin >> a;

	if (a == 1) {
		cout << "NO";
		return 0;
	}

	ll sum = 1;
	for (ll i = 2; i * i <= a ; i++) {
		if (a % i == 0) {
			sum += i;
			if (i * i != a)
				sum += (a / i);
		}
	}

	if (sum == a) cout << "YES";
	else cout << "NO";

	return 0;
}