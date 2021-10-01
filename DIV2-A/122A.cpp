#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	int n;
	cin >> n;
	if (n % 4 == 0  or n % 7 == 0) {
		cout << "YES";
	} else if (n % 47 == 0 or n % 74 == 0) {
		cout << "YES";
	} else if (n % 447 == 0 or n % 474 == 0 or n % 744 == 0
	           or n % 774 == 0 or n % 477 == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;

}