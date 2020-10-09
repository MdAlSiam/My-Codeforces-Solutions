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
#define prYes printf("YES\n")
#define prNo printf("NO\n")
#define aNewLine printf("\n")

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
    /// 1422B, Score: 750
    scll(n, m);
    ll grid[n+10][m+10];
    For (i, 1, n+1) {
        For (j, 1, m+1) {
            scl(grid[i][j]);
        }
    }

    ans = 0;

    For (i, 1, ((n+1)/2)+1) {
        For (j, 1, ((m+1)/2)+1) {

            vector<ll> vec;

            // itself
            ll aa = grid[i][j];
            vec.pb(aa);
            // ro equivalent
            ll bb = grid[i][m-j+1];
            if (j != m-j+1) vec.pb(bb);
            // col equivalent
            ll cc = grid[n-i+1][j];
            if (i != n-i+1) vec.pb(cc);
            // col equivalent for ro equivalent
            ll ddd = grid[n-i+1][m-j+1];
            if (i != n-i+1 and j != m-j+1) vec.pb(ddd);

            ll cost = inf;

            For (i, 0, vec.size()) {
                ll costNow = 0;
                For (j, 0, vec.size()) {
                    costNow += abs(vec[j]-vec[i]);
                }
                if (costNow < cost) cost = costNow;
            }

            ans += cost;
        }
    }

    prl(ans);
}

int main() {
    test = 1;
    while (scl(test) == 1)
    while (test--) solve();
}

