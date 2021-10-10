#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll n, l, k, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int t1 = (k * l) / nl;
	int t2 = c * d;
	int t3 = p / np;

	cout << min(t1, min(t2, t3)) / n;


	return 0;
}