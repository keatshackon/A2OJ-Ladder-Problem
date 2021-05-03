#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, q, n, k;
	cin >> t;
	set<int>s;
	cin >> n;
	while (n--) {
		cin >> q;
		s.insert(q);
	}
	cin >> k;
	while (k--) {
		cin >> q;
		s.insert(q);
	}
	if (s.size() == t) {
		cout << "I become the guy.";
	} else {
		cout << "Oh, my keyboard!";
	}
	return 0;

}