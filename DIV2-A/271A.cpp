#include <bits/stdc++.h>
using namespace std;
#define  ll long long


int main() {

	ll t, n;
	cin >> t;
	t++;
	while (true) {
		string temp = to_string(t);
		set<int>s;
		s.insert(temp[0]);
		s.insert(temp[1]);
		s.insert(temp[2]);
		s.insert(temp[3]);
		if (s.size() == 4) {
			cout << t;
			break;
		}
		t++;
	}
	return 0;

}