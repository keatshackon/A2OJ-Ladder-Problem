#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, a, b, c, d;
	cin >> a >> b >> c;

	int d1 = a + (b * c);
	int d2 = a * (b + c);
	int d3 = (a + b) * c;
	int d4 = (a * b) + c;
	int d5 = a * b * c;
	int d6 = a + b + c;

	cout << (max(max(max(max(max(d1, d2), d3), d4), d5), d6));
	return 0;

}