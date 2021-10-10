#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	string s;
	cin >> s;

	if (s == "")
		return 0;

	if (s[0] >= 'a' and s[0] <= 'z') s[0] = (s[0] - 32);

	cout << s;
	return 0;

}