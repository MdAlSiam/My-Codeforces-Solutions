#include <iostream>
using namespace std;

#define int long long int

int32_t main() {
    int test;
    cin >> test;

    while (test--) {
        int n, k;
        cin >> n >> k;

        int ara[n+10];
        ara[0] = -1;
        for (int i = 1; i <= n; i++) {
            cin >> ara[i];
        }
        ara[n+1] = -1;

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            if (ara[i-1] < ara[i] and ara[i] > ara[i+1]) {
                // peak
                ans += ara[i];
            }
            if (ara[i-1] > ara[i] and ara[i] < ara[i+1]) {
                // valley
                ans -= ara[i];
            }
        }

        cout << ans << endl;
    }

}
