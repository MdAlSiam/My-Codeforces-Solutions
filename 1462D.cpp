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

#define maxn 200005LL ///2x10^5 + 5
//#define maxn 1000006LL ///10^6 + 6
//#define maxn 1000000009LL ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007LL ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;
map<ll, ll> cumSumVals; // to the index where that cumsum occured.

void solve() {
    scl(n);
    ll sum = 0;
    cumSumVals.clear();
    For (i, 0, n) {
        scl(t);
        sum += t;
        cumSumVals[sum] = i;
    }

    ans = inf;

    For (i, 1, sum+1) {
        ll ansHere = inf;
        ll opHere = 0;
        ll lastTaken = -1;
        for (ll j = i; j <= sum; j += i) {
            if (cumSumVals.count(j)) {
                opHere += (cumSumVals[j]-lastTaken-1);
                lastTaken = cumSumVals[j];
                if (j == sum) {
                    ansHere = opHere;
                    break;
                }
            }
            else break;
        }
        ans = min(ans, ansHere);
    }

    prl(ans);
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}
