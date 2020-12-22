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
ll a, b, c, ans, u;
ll x, y, z = -1, maxi, mini;

vector<ll> v;

void solve() {
    scl(n);
    ll toSubtract = 9;

    v.clear();

    bool used[10];
    Mem(used, false);

    while (n >= 0) {
        if (n - toSubtract >= 0) {
            n -= toSubtract;
            v.pb(toSubtract);
            used[toSubtract] = true;
        }
        toSubtract--;

        if (toSubtract == 0) break;
    }

    if (n > 9) {
        prl(z);
        return;
    }

    if (used[n]) {
        prl(z);
        return;
    }

    if (n != 0 ) {
        v.pb(n);
    }



    for (ll i = v.size() - 1; i >= 0; i--) {
        printf("%lld", v[i]);
    }
    aNewLine;
}

int main() {
    test = 1;
    cin >> test;
    while (test--) solve();
}
