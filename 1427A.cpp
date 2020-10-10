#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;

        int ara[n];
        int sum = 0;
        int plusSum = 0;
        int minusSum = 0;
        for (int i = 0; i < n; i++) {
            cin >> ara[i];
            sum += ara[i];
            if (ara[i] >= 0) plusSum += ara[i];
            else minusSum -= ara[i];
        }

        if (sum == 0) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        if (plusSum > minusSum) sort(ara, ara+n, greater<int>());
        else sort(ara, ara+n);

        for (int i = 0; i < n; i++)
            i == n-1 ? cout << ara[i] << endl : cout << ara[i] << " ";
    }
}
