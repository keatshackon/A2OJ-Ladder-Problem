#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll a, b, c, d;
	cin >> a >> b >> c >> d;

	int fare1 = a * c;
	int fare2;
	if (a % b == 0) {
		fare2 = (a / b) * d;
	} else {
		fare2 = ((a / b) + 1) * d;
	}

	int fare3 = (a / b) * d;
	fare3 += (a % b) * c;

	cout << min(min(fare1, fare2), fare3);
	return 0;
}