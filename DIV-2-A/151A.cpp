#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	cout << min(min((k * l) / nl, c * d), (p / np)) / n;

	return 0;

}