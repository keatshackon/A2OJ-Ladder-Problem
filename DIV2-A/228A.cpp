#include <bits/stdc++.h>
using namespace std;
#define  ll long long

int main() {

	ll t, q;
	t = 4;
	set<int>s;
	while (t--) {
		cin >> q;
		s.insert(q);
	}
	cout << 4 - s.size();
	return 0;

}