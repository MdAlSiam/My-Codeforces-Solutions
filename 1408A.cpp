/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)
#define prys printf("YES\n")
#define prno printf("NO\n")

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 + 5
//#define maxn 1000006 ///10^6 + 6
//#define maxn 1000000009 ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

void solve() {
    scl(n);
    ll ara[n][4];

    For (i, 0, n) {
        scl(ara[i][0]);
        ara[i][3] = -1;
    }
    For (i, 0, n) {
        scl(ara[i][1]);
    }
    For (i, 0, n) {
        scl(ara[i][2]);
    }


    For (i, 0, n) {
        if (i == 0) {
            ara[i][3] = ara[i][0];
        }
        else if (i == n-1) {
            For (j, 0, 3) {
                if (ara[i][j] != ara[i-1][3] and ara[i][j] != ara[0][3]) {
                    ara[i][3] = ara[i][j];
                    break;
                }
            }
        }
        else {
            For (j, 0, 3) {
                if (ara[i][j] != ara[i-1][3]) {
                    ara[i][3] = ara[i][j];
                    break;
                }
            }
        }
    }

    For (i, 0, n) {
        printf("%lld ", ara[i][3]);
    }

    printf("\n");
}

int main() {
    test = 1;
    while (scl(test) == 1)
    while (test--) solve();
}

