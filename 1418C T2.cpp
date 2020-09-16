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

#define maxn 200055 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;
ll ara[maxn];
ll dp[maxn][2];

ll go (ll index, ll step) {
    //base
    if (index >= n) return 0;

    //opt
    if (dp[index][step] != -1) return dp[index][step];

    ll ret1 = 0, ret2 = 0, ret3 = 0, ret4 = 0, ret;

    if (step & 1) {
        ret1 += ara[index] + go(index+1, 2);
        ret2 += ara[index] + ara[index+1] + go(index+2, 2);
        ret = min(ret1, ret2);
    }
    else {
        ret3 += go(index+1, 1);
        ret4 += go(index+2, 1);
        ret = min(ret3, ret4);
    }

    return dp[index][step] = ret;
}

void solve() {
    scl(n);
    For (i, 0, n){
        scl(ara[i]);
    }

    For (i, 0, n+2){
        dp[i][0] = dp[i][1] = -1;
    }

    cout << go(0, 1) << endl;
}

int main() {
    test = 1;
    while (scl(test) == 1)
    while (test--) solve();
}

