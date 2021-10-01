#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll a, b;
	cin >> a >> b;
	if (min(a, b) % 2 == 0) {
		cout << "Malvika";
	} else {
		cout << "Akshat";
	}
	return 0;

}