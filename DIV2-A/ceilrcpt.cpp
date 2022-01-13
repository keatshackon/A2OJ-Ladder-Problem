#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if ((n & (n - 1)) == 0) {
			int count = 0;
			while (n) {
				if (n > 2048) {
					n = n / 2 ;
					count++;
				} else {
					count++;
					cout << count << "\n";
					break;
				}
			}
			continue;
		}
		int cnt = 0;
		while (n) {
			int temp = log2(n);
			n = n - pow(2, temp);
			cnt++;
			if ((n & (n - 1) == 0) and n < 2048) {
				cnt++;
				break;
			}

		}
		cout << cnt << "\n";
	}

	return 0;
}