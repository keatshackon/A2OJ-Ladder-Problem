#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll a, b;
	cin >> a >> b;
	int cnt = 0;
	for (int i = 0; i <= 1000; i++) {
		for (int j = 0; j <= 1000; j++) {
			if (((i * i + j) == a) and ((i + j * j) == b)) {
				cnt++;
			}
		}
	}

	cout << cnt;
	return 0;


}