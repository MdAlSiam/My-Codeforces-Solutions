#include <bits/stdc++.h>
using namespace std;

#define int long long int

int n;
int ara[300005];
int dp[300005][2];

int go (int index, int type) {
    if (index >= n) {
        return 0;
    }

    if (dp[index][type] != -1) {
        return dp[index][type];
    }

    int ret = -1;
    if (type == 0) {
        ret = max(ret, ara[index]+go(index+1, 1));
        ret = max(ret, go(index+1, 0));
    }
    else {
        ret = max(ret, -ara[index]+go(index+1, 0));
        ret = max(ret, go(index+1, 1));
    }

    // cout << "ind " << index << " ret " << ret << endl;

    dp[index][type] = ret;

    return ret;
}

int32_t main() {
    int test;
    cin >> test;

    while (test--) {
        int _;
        cin >> n >> _;

        for (int i = 0; i < n; i++) {
            cin >> ara[i];
            dp[i][0] = dp[i][1] = -1;
        }

        cout << go(0, 0) << endl;
    }
}
