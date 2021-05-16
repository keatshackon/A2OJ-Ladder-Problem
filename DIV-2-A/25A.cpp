#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll n, q;
	cin >> n;
	int i = 1;
	int ev = 0;
	int od = 0;

	// vector<int> v;

	int idx1 = 0;
	int idx2 = 0;

	while (n--) {
		cin >> q;
		if (q % 2 == 0) {
			ev++;
			idx1 = i ;
		} else {
			od++;
			idx2 = i;
		}
		i++;
		// v.push_back(q);
	}

	if (ev  == 1) {
		cout << idx1;
	} else {
		cout << idx2;
	}

	// if (od == 1) {
	// 	for (int i = 0; i < v.size(); i++) {
	// 		if (v[i] % 2 == 1) {
	// 			cout << i + 1;
	// 			break;
	// 		}
	// 	}
	// } else {
	// 	for (int i = 0; i < v.size(); i++) {
	// 		if (v[i] % 2 == 0) {
	// 			cout << i + 1;
	// 			break;
	// 		}
	// 	}
	// }
	return 0;
}