#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t, n, a;
	cin >> t >> n >> a;

	int temp = t - n;

	if (temp > a) {
		temp = temp - (temp - a - 1);
	}

	cout << temp;

	return 0;

}