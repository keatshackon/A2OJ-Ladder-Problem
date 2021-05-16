#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll a, b, c, d, x1, x2, y1, y2;
	cin >> a >> b >> c >> d;

	//<==========INCOMPLETE==========>

	if (a != c and b != d and abs(a - c) != abs(b - d)) {
		cout << -1;
	} else if (a == c) {
		cout << a << " " << b + d << " " << a + c << d;
	} else if (b == d) {
		cout << a << " " << b + d << " " << a + c << d;
	} else {
		cout <<
	}

	return 0;
}