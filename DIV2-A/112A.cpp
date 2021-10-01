#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	string s1, s2;
	cin >> s1 >> s2;

	int i = 0;
	int j = 0;
	int res = 0;
	while (i < s1.length() and j < s2.length()) {
		if (s1[i] >= 'A' and s1[i] <= 'Z') {
			s1[i] = s1[i] + 32;
		}
		if (s2[j] >= 'A' and s2[j] <= 'Z') {
			s2[j] = s2[j] + 32;
		}
		if (s1[i] < s2[j]) {
			res = -1;
			break;
		} else if (s1[i] > s2[j]) {
			res = 1;
			break;
		}
		i++;
		j++;
	}
	cout << res << "\n";

	return 0;

}