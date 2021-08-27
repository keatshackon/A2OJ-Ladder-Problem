#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll a, b;
	cin >> a >> b;

	for (ll i = a; i >= b; i--) {
		if (i % b == 0) {
			cout << i;
			break;
		}
	}
	return 0;
}