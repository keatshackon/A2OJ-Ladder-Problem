#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {


	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t, n, a, b, c, d;
	cin >> t;
	while (t--) {
		cin >> a >> b;

		if (a > 0 and b > 0) {
			cout << "Solution\n";
		} else if (b == 0 and a > 0) {
			cout << "Solid\n";
		} else if (a == 0 and b > 0) {
			cout << "Liquid\n";
		}
	}
	return 0;

}