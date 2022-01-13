#include<bits/stdc++.h>
using namespace std;
#define ll long long

// bool prime[10000000 + 10];
vector<int> is_prime(10000009, 1);
vector<int> freee(10000009, 0);

void SieveOfEratosthenes() {

	is_prime[0] = 0;
	is_prime[1] = 0;
	for (int i = 2; i * i <= 10000001; i++) {
		if (is_prime[i]) {
			for (int j = i * i; j <= 10000001; j += i)
				is_prime[j] = 0;
		}
	}
	for (int i = 2; i <= 10000001; i++) {
		freee[i] = freee[i - 1] + is_prime[i];
	}
}

int main() {

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	SieveOfEratosthenes();
	ll t, n, k, a;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		ll ans = k - n;
		ans = ans - (freee[k] - freee[n]);
		if (is_prime[n + 1]) {
			ans++;
		}
		cout << ans << "\n";
	}

	return 0;
}
