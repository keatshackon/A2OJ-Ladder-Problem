#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	set<char>s;
	ll t;
	string ss;
	cin >> ss;

	for (auto q : ss) {
		s.insert(q);
	}
	if (s.size() % 2 == 1) {
		cout << "IGNORE HIM!";
	} else {
		cout << "CHAT WITH HER!";
	}
	return 0;

}