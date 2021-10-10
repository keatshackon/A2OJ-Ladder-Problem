#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, q;
	cin >> t;
	int chest = 0, bicep = 0, back = 0;
	int i = 0;
	while (t--) {
		cin >> q;
		if (i % 3 == 0) {
			chest += q;
		} else if (i % 3 == 1) {
			bicep += q;
		} else {
			back += q;
		}
		i++;
	}

	if (chest >= back and chest >= bicep) {
		cout << "chest";
	} else if (back >= bicep and back >= chest) {
		cout << "back";
	} else {
		cout << "biceps";
	}

	return 0;

}