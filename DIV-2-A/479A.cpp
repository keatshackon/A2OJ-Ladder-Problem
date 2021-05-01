#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll a, b, c;
	cin >> a >> b >> c;


	if (a == 1 and  b == 1 and c == 1) {
		cout << a + b + c;

	} else if (a == 1) {
		if (c == 1) {
			cout << (a + b) + c;
		} else {
			cout << (a + b)*c;
		}
	} else if (b == 1) {
		if (((a + b )* c) >= ((c + b) * a)) {
			cout << (a + b)*c;
		} else {
			cout << (c + b) * a;
		}
	} else if (c == 1) {
		if (((c + b )* a) >= (a + b)*c) {
			cout << (c + b)*a;
		} else {
			cout << (a + b)*c;
		}
	} else {
		cout << a*b*c;
	}
	return 0;
}