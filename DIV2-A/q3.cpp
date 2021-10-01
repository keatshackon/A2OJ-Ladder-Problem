#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {


    int t;
    cin >> t;
    while (t--) {

        ll n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        bool lm = true;
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i]) {
                lm = false;
                break;
            }
        }

        if (lm) {
            cout << "YES" << endl;
            continue;
        }

        ll cck = 0, cct = 0;
        for (auto x : t) {
            if (x == '1') {
                cct++;
            } else {
                cck++;
            }
        }

        if (cct > 0 and cck > 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}