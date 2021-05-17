#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll a, b;
	cin >> a >> b;

	int aWin = 0;
	int bWin = 0;
	int draw = 0;



	if (abs(a - 1) < abs(b - 1)) {
		aWin++;
	} else if (abs(a - 1) > abs(b - 1)) {
		bWin++;
	} else {
		draw++;
	}

	if (abs(a - 2) < abs(b - 2)) {
		aWin++;
	} else if (abs(a - 2) > abs(b - 2)) {
		bWin++;
	} else {
		draw++;
	}

	if (abs(a - 3) < abs(b - 3)) {
		aWin++;
	} else if (abs(a - 3) > abs(b - 3)) {
		bWin++;
	} else {
		draw++;
	}

	if (abs(a - 4) < abs(b - 4)) {
		aWin++;
	} else if (abs(a - 4) > abs(b - 4)) {
		bWin++;
	} else {
		draw++;
	}

	if (abs(a - 5) < abs(b - 5)) {
		aWin++;
	} else if (abs(a - 5) > abs(b - 5)) {
		bWin++;
	} else {
		draw++;
	}

	if (abs(a - 6) < abs(b - 6)) {
		aWin++;
	} else if (abs(a - 6) > abs(b - 6)) {
		bWin++;
	} else {
		draw++;
	}

	cout << aWin << " " << draw << " " << bWin;

	return 0;
}