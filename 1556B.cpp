/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x)              scanf("%lld", &x)
#define scll(x, y)          scanf("%lld %lld", &x, &y)
#define scd(x)              scanf("%lf", &x)
#define scdd(x, y)          scanf("%lf %lf", &x, &y)

#define prl(x)              printf("%lld\n", x)
#define prll(x, y)          printf("%lld %lld\n", x, y)
#define prYes               printf("YES\n")
#define prNo                printf("NO\n")
#define aNewLine            printf("\n")

#define ON(n, i)            (n|(1LL<<i))
#define OFF(n, i)           (n&(~(1LL<<i)))
#define CHK(n, i)           (n&(1LL<<i))

#define For(i, x, y)        for(ll i = x; i < y; i++)
#define Mem(ara, x)         memset(ara, x, sizeof(ara))

#define pb                  push_back
#define pll                 pair<ll, ll >
#define ff                  first
#define ss                  second

#define maxn                200005LL ///2x10^5 + 5

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7

bool debug = false;

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    scl(n);
    For (i, 0, n) scl(ara[i]);

    ll ans1 = 0;
    vector<ll> missevenindices, missoddindices;
    missevenindices.clear();
    missoddindices.clear();
    For (i, 0, n) {
        if (i%2 == 0 and ara[i]%2 != 0) missevenindices.pb(i);
        else if (i%2 != 0 and ara[i]%2 == 0) missoddindices.pb(i);
    }
    if (missevenindices.size() != missoddindices.size()) ans1 = inf;
    else {
        For (i, 0, missevenindices.size()) ans1 += abs(missevenindices[i]-missoddindices[i]);
    }

    ll ans2 = 0;
    // vector<ll> missevenindices, missoddindices;
    missevenindices.clear();
    missoddindices.clear();
    For (i, 0, n) {
        if (i%2 == 0 and ara[i]%2 != 1) missevenindices.pb(i);
        else if (i%2 != 0 and ara[i]%2 == 1) missoddindices.pb(i);
    }
    if (missevenindices.size() != missoddindices.size()) ans2 = inf;
    else {
        For (i, 0, missevenindices.size()) ans2 += abs(missevenindices[i]-missoddindices[i]);
    }

    ans = min(ans1, ans2);
    if (ans == inf) ans = -1;
    prl(ans);
} 
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}