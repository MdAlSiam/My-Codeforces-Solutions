#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
    int n;
    cin >> n;

    map<int, int> kount;
    kount.clear();
    int sum = 0;
    kount[0] = 1;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int _;
        cin >> _;

        sum += _;

        if (kount[sum] > 0) {
            ans++;
            kount.clear();
            kount[0] = 1;
            sum = _;
        }

        kount[sum] = 1;
    }

    cout << ans << endl;
}
