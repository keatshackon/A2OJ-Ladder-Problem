#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll  a, b;
	cin >> a >> b;
	int f = 1;
	if (a % 2 == 0) {
		int temp = a / 2;
		int cnt = temp;
		while ((temp % b != 0) and temp < a) {
			temp += 1;
			f = 0;
			cnt++;
		}
		if (temp %  b != 0) {
			cout << -1 << "\n";
		} else {
			cout << cnt;
		}


	} else {
		int temp = a / 2 + 1;
		int cnt = temp;
		while ((temp % b != 0) and temp < a) {
			temp += 1;
			cnt++;
			f = 0;
		}
		if (temp % b != 0) {
			cout << -1 << "\n";
		} else {
			cout << cnt;
		}

	}

	return 0;

}