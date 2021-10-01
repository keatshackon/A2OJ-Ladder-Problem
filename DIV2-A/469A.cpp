#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, q;
	set<int>s;
	cin >> t;
	cin >> n;
	while (n--) {
		cin >> q;
		s.insert(q);
	}
	cin >> n;
	while (n--) {
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