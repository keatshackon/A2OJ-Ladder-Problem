#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	string s;
	cin >> s;
	string res = "";
	for (int i = 0; i < s.length(); i++ ) {
		char q = s[i];
		if (!(q == 'a' or q == 'A' or q == 'e' or q == 'E'
		        or q == 'i' or q == 'I' or q == 'o' or q == 'O'
		        or q == 'u' or q == 'U' or q == 'y' or q == 'Y')) {

			res += '.';
			if (q >= 'A' and q <= 'Z') {
				res += (q + 32);
			} else {
				res += q;
			}
		}
	}
	cout << res;
	return 0;
}