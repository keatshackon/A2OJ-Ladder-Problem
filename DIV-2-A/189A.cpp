#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll a, b, c, d;
	vector<int>v;
	cin >> a >> b >> c >> d;

	v.push_back(b);
	v.push_back(c);
	v.push_back(d);

	sort(v.begin(), v.end());

	if ((v[0] + v[1] + v[2]) == a) {
		cout << 3;
	} else if ((v[0] + v[1]) == a) {
		cout << 2;
	} else if ((v[0]) == a) {
		cout << 1;
	} else {
		cout << a;
	}

	return 0;
}