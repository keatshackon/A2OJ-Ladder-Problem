#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n, a, b, c, d;
	cin >> a >> b >> c >> d;

	int s1 = max((3 * a) / 10, a - ((a * c) / 250));
	int s2 = max((3 * b) / 10, b - ((b * d) / 250));

	if (s1 > s2) {
		cout << "Misha";
	} else if (s2 > s1) {
		cout << "Vasya";
	} else {
		cout << "Tie";
	}

	return 0;
}