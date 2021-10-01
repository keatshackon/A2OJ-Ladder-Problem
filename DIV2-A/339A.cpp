#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	string s;
	cin >> s;
	vector<char>v;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= '1' and s[i] <= '9') {
			v.push_back(s[i]);
		}
	}
	sort(v.begin(), v.end());
	string res = "";
	for (int i = 0; i < v.size() - 1; i++) {
		res += v[i];
		res += "+";
	}

	res += v[v.size() - 1];

	cout << res;

	return 0;

}